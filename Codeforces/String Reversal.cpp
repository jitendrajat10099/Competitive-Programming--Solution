/*
Problem link- https://codeforces.com/contest/1430/problem/E
*/

#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

const int N = 200005;

int n, p[N];
string s;
vector<int> posChar[26];

struct BIT {
    int t[N];
    void upd(int x, int val) {
        for (; x < N; x += (x & -x)) t[x] += val;
    }
    int get(int x) {
        int res = 0;
        for (; x; x -= (x & -x)) res += t[x];
        return res;
    }
}t;

int main() {
    cin >> n >> s;
    s = " " + s;
    for (int i = n; i >= 1; i--) {
        int c = s[i] - 'a';
        posChar[c].push_back(i);
    }
    for (int i = n; i >= 1; i--) {
        int c = s[i] - 'a';
        p[i] = posChar[c].back();
        posChar[c].pop_back();
    }
    ll res = 0;
    for (int i = 1; i <= n; i++) {
        res += t.get(p[i]);
        t.upd(p[i], 1);
    }
    cout <<res;
}