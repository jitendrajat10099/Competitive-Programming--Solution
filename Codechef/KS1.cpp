#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll arr[100003] = {0};
ll arrayXor(ll n, ll m)
{
    ll ans = 0, ans1 = 0;
    ll xorr[n + 2];
    map<ll,ll> ma;
    map<ll,ll> map1;
    xorr[0] = arr[0];
    for (ll i = 1; i < n; i++)
        xorr[i] = xorr[i - 1] ^ arr[i];
    for (ll i = 0; i < n; i++)
    {
        ll tmp = m ^ xorr[i];
        if ((ll)ma[tmp] == 1 || (ll)ma[tmp] > 1)
        {
            ans = ans + ((ll)ma[tmp]);
            ans1 = ans1 + (ll)ma[tmp] * i - map1[tmp];
        }
        if (xorr[i] == m)
            ans = ans + 1;
        if (xorr[i] == m)
            ans1 = ans1 + (i + 1) - 1;
        ma[xorr[i]] += 1;
        map1[xorr[i]] += i + 1;
    }
    return ans1;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, j, m = 0;
        cin >> n;
        for (j = 0; j < n; j++)
            cin >> arr[j];
        cout << arrayXor(n, m) << "\n";
    }
}
