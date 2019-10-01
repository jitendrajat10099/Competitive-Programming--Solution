#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define pie 3.14
typedef long long int ll;
/*
 .d8b.  d8888b. db    db  .d8b.  d8b   db 
d8' `8b 88  `8D `8b  d8' d8' `8b 888o  88 
88ooo88 88oobY'  `8bd8'  88ooo88 88V8o 88 
88~~~88 88`8b      88    88~~~88 88 V8o88 
88   88 88 `88.    88    88   88 88  V888 
YP   YP 88   YD    YP    YP   YP VP   V8P 
                                          
                                          
*/


///////////////////////////////////////
ll power(ll n,ll x)
{
    ll po=1;
    while(x!=0)
    {
        if(x%2==0)
        {
            n=(n%mod)*(n%mod);
            n=n%mod;
            x=x/2;
        }
        po=((po%mod)*(n%mod))%mod;
        po=po%mod;
        x--;
    }
    return po%mod;
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
cin>>t;
while(t--)
{
    ll n,x,y,c1=0,c2=0,c3=0,ans=0,i,flag=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>x>>y;
        if(((x%2)==0) && ((y%2)==0))
        {
            c1++;
        }
        else if(((x%2)==1) && ((y%2)==1))
        {
            c2++;
        }
        else
        {
            c3++;
        }
    }
    // if(n==1)
    // {
    //     if(c1==1)
    //         cout<<0<<"\n";
    //     if(c2==1)
    //         cout<<2<<"\n";
    //     else
    //         cout<<1<<"\n";
    //     continue;
    // }
    if((c2%2)==0 && c3==0)
    {
   flag=1;
    }
    ans=power(2,c1)%mod;
    ans=ans%mod;
    ans=ans*power(2,c2)%mod;
    ans=ans%mod;
    ans=ans*power(2,c3)%mod;
    ans=ans%mod;
    if(c3!=0)
    ans=ans*power(2,mod-2)%mod;
    ans=ans%mod;
    if(flag==0)
    cout<<ans<<"\n";
else
    cout<<0<<"\n";
}
}
