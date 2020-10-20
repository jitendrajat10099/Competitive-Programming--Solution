/*
Problem link- https://codeforces.com/contest/1424/problem/B
*/

#include <bits/stdc++.h>
#define FOR(i, u, v) for (int i = u; i <= v; i++)
#define FORD(i, v, u) for (int i = v; i >= u; i--)
#define pii pair<int, int>
#define mp make_pair
#define F first
#define S second
#define PB push_back
#define N 100005

using namespace std;

struct edge {
    int u, v, w;
    edge(int _u=0, int _v=0, int _w=0) : u(_u), v(_v), w(_w) {}

    bool operator < (const edge &rhs) const {
        return w < rhs.w;
    }
}e[N];

const int MM = 1000006;
struct Edge {
    int u, v, c, f;
    Edge(int _u=0, int _v=0, int _c=0, int _f=0) : u(_u), v(_v), c(_c), f(_f) {}
}E[MM];
vector<int> g[2*N];
int cnt = 0;
void add_edge(int u, int v, int w) {
    g[u].PB(cnt);
    E[cnt++] = Edge(u, v, w, 0);
    g[v].PB(cnt);
    E[cnt++] = Edge(v, u, 0, 0);
}
int visited[2*N], pos[2*N], d[2*N];
int s, t;
int cur_time = 0;
bool BFS() {
    visited[s] = ++cur_time;
    queue<int> q;
    q.push(s);
    while (!q.empty()) {
        int u = q.front();
        q.pop();
        pos[u] = 0;
        for (auto id : g[u]) {
            int v = E[id].v;
            if (visited[v] == cur_time || E[id].f == E[id].c) {
                continue;
            }
            visited[v] = cur_time;
            q.push(v);
            d[v] = d[u] + 1;
        }
    }
    return (visited[t] == cur_time);
}

int DFS(int u, int delta) {
    if (u == t || delta == 0) {
        return delta;
    }
    for (; pos[u] < g[u].size(); pos[u]++) {
        int id = g[u][pos[u]];
        int v = E[id].v;
        if (d[v] != d[u] + 1 || E[id].f == E[id].c) {
            continue;
        }
        if (int x = DFS(v, min(delta, E[id].c - E[id].f))) {
            E[id].f += x;
            E[id ^ 1].f -= x;
            return x;
        }
    }
    return 0;
}

int n, m;
bool check(int mid) {
    cnt = 0;
    FOR(i, 1, 2*n+2) g[i].clear();

    s = 2*n + 1;
    t = 2*n + 2;
    for (int i = 1; i <= n; i++) {
        add_edge(s, i, 1);
        add_edge(i + n, t, 1);
    }
    for (int i = 1; i <= mid; i++) {
        int u = e[i].u;
        int v = e[i].v;
        add_edge(u, v + n, 1);
    }

    int max_flow = 0;
    while (BFS()) {
        while (int x = DFS(s, 1000)) max_flow += x;
    }
    return max_flow == n;
}
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); 
    cin >> n >> m;
    FOR(i, 1, m) {
        int u, v, w; cin >> u >> v >> w;
        e[i] = edge(u, v, w);
    }
    sort(e+1, e+m+1);
    int l = 0, r = m+1;
    while (r - l > 1) {
        int mid = (r + l)/2;
        if (check(mid)) r = mid;
        else l = mid;
    }
    if (r == m+1) {
        cout <<-1;
    } else {
        cout <<e[r].w;
    }
}