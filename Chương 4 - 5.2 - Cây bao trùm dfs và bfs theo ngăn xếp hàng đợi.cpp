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
int a[1005][1005];
int check[1005];
int n;

void dfs(int u) {
    check[u] = 1;
    for (int i = 1; i <= n; i++) {
        if (a[u][i] == 1 && check[i] == 0) {
            cout << min(u, i) << " " << max(u, i) << "\n";
            dfs(i);
        }
    }
}

void bfs(int u) {
    queue<int> q;
    q.push(u);
    check[u] = 1;
    while (!q.empty()) {
        int s = q.front();
        q.pop();
        for (int i = 1; i <= n; i++) {
            if (a[s][i] == 1 && check[i] == 0) {
                cout << min(s, i) << " " << max(s, i) << "\n";
                q.push(i);
                check[i] = 1;
            }
        }
    }
}



int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n;
    int start;
    cin >> start;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> a[i][j];
        }
    }
    cout << "DFS tree\n";
    dfs(start);
    cout << "BFS tree\n";
    memset(check, 0, sizeof(check));
    bfs(start);






}
