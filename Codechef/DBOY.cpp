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
ll t;
cin>>t;
while(t--)
{
    ll arr1[1005]={0};
    ll arr[1005]={0};
    ll b[1005]={0};
    ll dp[1005];
    for(ll i=0;i<1005;i++)
        dp[i]=1005;
    ll n,i,j;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
        arr1[i]=arr[i]*2;
    }
    for(i=0;i<n;i++)
    {
        cin>>b[i];
    }
    dp[0]=0;
    for(i=1;i<1001;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i-b[j]>=0)
            dp[i]=min(dp[i],dp[i-b[j]]+1);
        }
    }
    ll sum=0;
    for(i=0;i<n;i++)
    {
       sum+=dp[arr1[i]];
    }
    cout<<sum<<"\n";

}
}
