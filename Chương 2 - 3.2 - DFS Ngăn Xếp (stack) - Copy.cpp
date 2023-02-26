#include <iostream>
#include <stack>
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

//dfs from adjec matrix
int a[100][100];
int n;
int visited[100];

void stack_dfs(int u) {
    stack<int> s;
    s.push(u);
    visited[u] = 1;
    while (!s.empty()) {
        int t = s.top();
        s.pop();
        cout << t << ' ';
        for (int i = n; i >= 1; i--) {
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
    stack_dfs(1);
    



}