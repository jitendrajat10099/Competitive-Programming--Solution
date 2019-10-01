#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long int ll;
ll power(ll x,ll y,ll m) 
{ 
    if(y==0) 
    return 1; 
    ll p=power(x,y/2,m)%m; 
    p=(p*p)%m; 
    return (y%2 == 0)? p : (x * p) % m; 
} 

ll inverse(ll n)
{
    return power(n,mod-2,mod)%mod;
}
ll factorial(ll n)
{
    ll fact=n,i;
    for(i=n-1;i>=1;i--)
    {
      fact=fact%mod*i%mod;
      fact=fact%mod;
    }
    return fact%mod;
}
int main()
{
ll n,q,i;
ll arr[100001];
cin>>n>>q;
for(i=0;i<n;i++)
cin>>arr[i];
ll a=0,l,r,l1,l2,r1,r2,temp;
while(q--)
{
    cin>>l1>>l2>>r1>>r2;
    ll ans=1;
    map<ll,ll>ma;
    l=(l1*a+l2)%n;
    r=(r1*a+r2)%n;
    if(l>r)
    {
      temp=l;
      l=r;
      r=temp;
    }
    ans=factorial(r-l+1);
    for(i=l-1;i<=(r-1);i++)
    {
     ma[arr[i]]++;
    }
    for(auto it=ma.begin();it!=ma.end();it++)
    {
      if((it->second)>=2)
    {
        ans=(ans*inverse(factorial(it->second))%mod)%mod;
    }
    }
    a=ans;
    cout<<ans<<endl;
}



}
