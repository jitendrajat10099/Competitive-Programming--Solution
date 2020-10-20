/*
Problem link- https://codeforces.com/contest/1368/problem/E
*/

#include <bits/stdc++.h>
#define FOR(i, u, v) for (int i = u; i <= v; i++)
#define FORD(i, v, u) for (int i = v; i >= u; i--)
#define pii pair<int, int>
#define mp make_pair
#define F first
#define S second
#define PB push_back
#define N 200005

using namespace std;

int n, m, col[N];
vector<int> g[N];
int main() {
    int Tests; cin >> Tests;
    while (Tests--) {
        cin >> n >> m;
        FOR(i, 1, n) g[i].clear(), col[i] = 0;

        FOR(i, 1, m) {
            int u, v; cin >> u >> v;
            g[u].PB(v);
        }
        vector<int> res;
        FOR(u, 1, n) {
            if (col[u] == 2) res.push_back(u);
            for (auto v : g[u]) {
                if (col[u] < 2) col[v] = max(col[v], col[u] + 1);
            }
        }
        cout <<res.size()<<'\n';
        for (auto u : res) cout <<u<<' ';
        cout <<'\n';
    }
}