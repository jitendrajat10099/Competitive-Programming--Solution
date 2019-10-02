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
    ll n,i,pa,pr,temp;
    ll arr[100005]={0};
    ll dp[100005]={0};
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    dp[n-1]=1;
    if(arr[n-1]<0)
    {
        pa=0;
    }
    else
        pa=1;
    for(i=n-2;i>=0;i--)
    {
        if(arr[i]<0)
            pr=0;
        else
            pr=1;
        if(pa!=pr)
        {
            //cout<<i<<" "<<"h\n";
            dp[i]=dp[i+1]+1;
            temp=pa;
            pa=pr;
            pr=temp;
        }
        else
        {
        dp[i]=1;
        if(arr[i]<0)
        {
            pa=0;
        }
        else
            pa=1;
        }

    }
    for(i=0;i<n;i++)
        cout<<dp[i]<<" ";
    cout<<"\n";
}
}
