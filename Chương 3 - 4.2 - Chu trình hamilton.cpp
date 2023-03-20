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


int main() {
    int n;
    cin >> n;
    int start;
    cin >> start;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> a[i][j];
        }
    }
    
    //hamilton
    vector<int> v;
    for (int i = 1; i <= n; i++) {
        v.pb(i);
    }
    do {
        if (v[0] != start) break;
        int ok = 1;
        for (int i = 0; i < n - 1; i++) {
            if (a[v[i]][v[i + 1]] == 0) {
                ok = 0;
                break;
            }
        }
        if (ok == 1 && a[v[n - 1]][v[0]] == 1) {
            for (int i = 0; i < n; i++) {
                cout << v[i] << " ";
            }
            cout << v[0];
            cout << endl;
        }
    } while (next_permutation(v.begin(), v.end()));



}