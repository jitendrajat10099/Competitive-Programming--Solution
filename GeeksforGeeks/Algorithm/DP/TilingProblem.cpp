/*
https://www.geeksforgeeks.org/count-number-ways-tile-floor-size-n-x-m-using-1-x-m-size-tiles/
practice problem - https://practice.geeksforgeeks.org/problems/count-the-number-of-ways-to-tile-the-floor-of-size-n-x-m-using-1-x-m-size-tiles/0
*/

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll dp[10001];
ll solve(ll n,ll m)
{
    if(n<m)
        return 1;
    if(n==m)
        return 2;
    if(dp[n]!=-1)
        return dp[n];
        
    ll ans = ( solve(n-m,m)+solve(n-1,m) )%1000000007;
    dp[n]=ans;
    return ans;
    
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t,n,m;
    
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        memset(dp,-1,sizeof(dp));
        cout<<solve(n,m)<<endl;
    }



    return 0;
}
