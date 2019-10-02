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
ll arr[20005];
ll dp[65][10005];
ll ans[20005];
ll c=0;
ll solve(ll i,ll n,ll k)
{
    ll an;
    if(i>=k)
        
        {
            if(n==1)
                return 1;
            else
                return 0;
        }
            if(dp[i][n]!=-1)
        return dp[i][n];
    dp[i][n]=solve(i+1,n,k)+solve(i+1,__gcd(n,arr[i]),k);
    //1->Case of Not Including 2nd number 
    //2->Case of including the 2nd number
    return dp[i][n];
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
    ll n,sum=0;
    ll i,j;
    cin>>n;
    for(i=0;i<n;i++)
    {
        ans[i]=0;
        cin>>arr[i];
    }
    for(i=0;i<61;i++)
    {
        for(j=0;j<10001;j++)
            dp[i][j]=-1;
    }
for(i=0;i<n;i++)
{
    sum+=solve(i+1,arr[i],n);
}
cout<<sum<<"\n";
}
}
