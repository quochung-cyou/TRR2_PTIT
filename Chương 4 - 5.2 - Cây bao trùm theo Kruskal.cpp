#include <iostream>
#include <stack>
#include <vector>
#include <queue>
#include <algorithm>
#include <cstring>
#include <set>
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


struct canh {
    int u, v, w;
    bool operator < (const canh &a) const {
        if (w == a.w) {
            if (u == a.u) {
                return v < a.v;
            }
            return u < a.u;
        }
        return w < a.w;
    }
};

vector<canh> edges;

//dsu
int par[1005];
int find(int u) {
    if (par[u] == u) return u;
    return par[u] = find(par[u]);
}
void join(int u, int v) {
    u = find(u);
    v = find(v);
    if (u == v) return;
    par[u] = v;
}




int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n;

    for (int i = 1; i <= n; i++) {
        par[i] = i;
    }


    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> a[i][j];
            if (a[i][j] && i < j) {
                edges.push_back({i, j, a[i][j]});
            }
        }
    }

    sort(all(edges));


    vector<pair<int, int>> s;

    for (auto i : edges) {
        if (find(i.u) != find(i.v)) {
            join(i.u, i.v);
            kq += i.w;
            s.push_back({i.u, i.v});
        }
    }

    cout << "dh = " << kq << "\n";
    for (auto i : s) {
        cout << i.f << " " << i.s << endl;
    }










}
