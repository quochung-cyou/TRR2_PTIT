#include <iostream>
#include <queue>
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

int a[100][100];
int n;
int visited[100];

void queue_bfs(int u) {
    queue<int> s;
    s.push(u);
    visited[u] = 1;
    while (!s.empty()) {
        int t = s.front();
        s.pop();
        cout << t << " ";
        for (int i = 1; i <= n; i++) {
            if (a[t][i] == 1 && visited[i] == 0) {
                s.push(i);
                visited[i] = 1;
            }
        }
    }
}


int main() {
    cin >> n;
    
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> a[i][j];
        }
    }
    queue_bfs(1);
    



}