#include <iostream>
#include <stack>
#include <vector>
#include <queue>
#include <algorithm>
#include <cstring>
typedef long long ll;
typedef long double ld;

#define FOR(i, a) for (int i = 0; i < (a); i++)
#define mp make_pair
#define pb push_back
#define f first
#define s second
#define lb lower_bound
#define ub upper_bound
#define all(x) x.begin(), x.end()
#define ins insert

const int MOD = 1000000007;
using namespace std;
int kq = 0;

//dfs from adjec matrix
int a[100][100];
int n;
int visited[100];

void dequy_dfs(int u, vector<int> path, int end) {
    if (kq == 1) {
        return;
    }
    path.push_back(u);
    visited[u] = 1;
    if (u == end) {
        reverse(path.begin(), path.end());
        cout << "DFS path: ";
        for (int i = 0; i < path.size(); i++) {
            cout << path[i] << " ";
        }
        kq = 1;
        cout << endl;
    }
    for (int v = 1; v <= n; v++) {
        if (a[u][v] == 1 && visited[v] == 0) {
            dequy_dfs(v, path, end);
        }
    }
    path.pop_back();
    visited[u] = 0;
}

void queue_bfs(int u, vector<int> path, int end) {
    queue<int> q;
    q.push(u);
    visited[u] = 1;
    while (!q.empty()) {
        int s = q.front();
        q.pop();
        path.push_back(s);
        if (s == end) {
            reverse(path.begin(), path.end());
            cout << "BFS path: ";
            for (int i = 0; i < path.size(); i++) {
                cout << path[i] << " ";
            }
            kq = 1;
            cout << endl;
            return;
        }
        for (int v = n; v >= 1; v--) {
            if (a[s][v] == 1 && visited[v] == 0) {
                q.push(v);
                visited[v] = 1;
                break;
            }
        }
    }
}

int main() {
    cin >> n;
    int start, end;
    cin >> start >> end;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> a[i][j];
        }
    }
    vector<int> path;
    dequy_dfs(start, path, end);
    if (kq == 0) {
        cout << "no path" << endl;
        return 0;
    }
    kq = 0;
    memset(visited, 0, sizeof(visited));
    path.clear();
    queue_bfs(start, path, end);






}
