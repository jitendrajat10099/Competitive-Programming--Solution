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
int main()
{
ios_base::sync_with_stdio(false); 
cin.tie(NULL);
#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif
ll t,k;
ll n,ma,i,ans;
cin>>t;
while(t--)
{
    ma=-1;
    ll ans[100005]={0};
    ll a[100005];
    ll a1[100005];
    ll b[100005]={0};
    ll b2[100005]={0};
    ll sum1,sum2;
    cin>>n;
    for(i=0;i<n;i++)
    {
     cin>>k;
     a[i]=k;
     b[i]=b[i-1]+k;
    }
    for(i=0;i<n;i++)
    {
        cin>>k;
        a1[i]=k;
        b2[i]=b2[i-1]+k;
    }
    sum1=b[n-1];
    sum2=b2[n-1];
    for(i=0;i<n;i++)
    {
        //if(b[i]>b2[i] && (sum1-b[i])<(sum-b2[i]));
        ans[i]=b[i]+(sum2-b2[i]);
       // cout<<ans[i]<<endl;
    }
    ans[n]=sum1;
    ans[n+1]=sum2;
    for(i=0;i<n+2;i++)
    {
     if(ans[i]>ma)
        ma=ans[i];
    }
    cout<<ma<<endl;
}
}
