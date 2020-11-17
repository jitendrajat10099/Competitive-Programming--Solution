/*
Problem link- https://codeforces.com/contest/1423/problem/K
*/

#include <bits/stdc++.h>
#define FOR(i, u, v) for (int i = u; i <= v; i++)
#define FORD(i, v, u) for (int i = v; i >= u; i--)
#define pii pair<int, int>
#define mp make_pair
#define F first
#define S second
#define PB push_back
#define N 1100005

using namespace std;

bool notP[N];
vector<int> primes;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    notP[0] = notP[1] = 1;
    for (int i = 2; i < N; i++) {
        if (!notP[i]) {
            primes.PB(i);
            for (int j = 2*i; j < N; j+=i) notP[j] = 1;
        }
    }
    int Tests; cin >> Tests;
    while (Tests--) {
        int n; cin >> n;
        int be = lower_bound(primes.begin(), primes.end(), sqrt(n)) - primes.begin();
        if (primes[be]*primes[be] <= n) be++;
        int en = upper_bound(primes.begin(), primes.end(), n) - primes.begin() - 1;

        cout <<en - be + 2<<'\n';
    }
}