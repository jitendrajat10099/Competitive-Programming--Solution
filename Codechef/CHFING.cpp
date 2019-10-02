#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define pie 3.14
typedef long long int ll;
///////////////////////////////////////
ll power(ll x, ll y, ll m) 
{ 
    if (y == 0) 
    return 1; 
    ll p = power(x, y/2, m) % m; 
    p = (p * p) % m; 
    return (y%2 == 0)? p : (x * p) % m; 
} 
// To compute x^y under modulo m 
int main()
{
ios_base::sync_with_stdio(false); 
cin.tie(NULL);
ll t;
cin>>t;
while(t--)
{
    ll n,k,ans=0,sm,m,dif,no,a;
    cin>>n>>k;
    sm=k;
    m=n+k-1;
    dif=m-sm;
    no=ceil((sm-1)/(long double)dif);
    a=sm-1-dif*(no-1);
    ans=(no%mod*(a%mod+(sm%mod-1+mod)%mod)%mod)%mod;
    ans=(ans*power(2,mod-2,mod)%mod)%mod;
    cout<<ans<<"\n";
}
}
