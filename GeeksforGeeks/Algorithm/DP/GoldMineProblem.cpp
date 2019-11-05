#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int a[20][20],m,n;
int dp[20][20];
ll solve(int i,int j)
{
    if(i<0 || i>=n)
        return 0;
    if(j==m-1)
        return a[i][j];
    
    if(dp[i][j]!=-1)
        return dp[i][j];
        
    ll temp= max(solve(i,j+1),solve(i+1,j+1));
    temp = max(temp,solve(i-1,j+1));
    dp[i][j]=a[i][j]+temp;
    return dp[i][j];
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t,i,j;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        for(i=0;i<n;i++)
            for(j=0;j<m;j++)
                cin>>a[i][j];
        ll ans=0;
        memset(dp,-1,sizeof(dp));
        for(i=0;i<n;i++)
            ans=max(ans,solve(i,0));
        cout<<ans<<endl;
    }



    return 0;
}
