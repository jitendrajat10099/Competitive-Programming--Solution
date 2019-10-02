#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
ios_base::sync_with_stdio(false); 
cin.tie(NULL);
#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif
ll t;
cin>>t;
while(t--)
{
    ll n,k;
    cin>>n>>k;
    if(((n/k)%k)==0)
        cout<<"NO\n";
    else
        cout<<"YES\n";
}
}
