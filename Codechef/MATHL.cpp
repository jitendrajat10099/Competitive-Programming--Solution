#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define pie 3.14
typedef long long int ll;
/*
 .d8b.  d8888b. db    db  .d8b.  d8b   db 
d8' `8b 88  `8D `8b  d8' d8' `8b 888o  88 
88ooo88 88oobY'  `8bd8'  88ooo88 88V8o 88 
88~~88 88`8b      88    88~~88 88 V8o88 
88   88 88 `88.    88    88   88 88  V888 
YP   YP 88   YD    YP    YP   YP VP   V8P 
                                          
                                          
*/


///////////////////////////////////////
ll power(ll x, ll y, ll p) 
{ 
    ll res = 1;      // Initialize result 
  
    x = x % p;  // Update x if it is more than or  
                // equal to p 
  
    while (y > 0) 
    { 
        // If y is odd, multiply x with result 
        if (y & 1) 
            res = (res*x) % p; 
  
        // y must be even now 
        y = y>>1; // y = y/2 
        x = (x*x) % p;   
    } 
    return res; 
} 
int main()
{
ios_base::sync_with_stdio(false); 
cin.tie(NULL);
#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif
ll t;
ll an[1000001];
ll fact[1000001];
    ll n,i,ans=1;
    an[0]=1;
for(i=1;i<=1000000;i++)
{
    an[i]=((an[i-1]%mod)*(i%mod))%mod;
}
fact[0]=1;
for(i=1;i<=1000000;i++)
{
    fact[i]=(fact[i-1]%mod)*(an[i]%mod);
    fact[i]=fact[i]%mod;
}
//cout<<fact[5];
cin>>t;
while(t--)
{
    ll n;
    cin>>n;
    cout<<fact[n]<<"\n";
}
}
