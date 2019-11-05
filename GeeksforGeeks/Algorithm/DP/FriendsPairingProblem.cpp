#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t,n,i;
    ll dp[101];
    dp[1]=1,dp[2]=2;
    for(i=3;i<=100;i++)
        dp[i]=( dp[i-1]+(i-1)*dp[i-2] )%1000000007;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cout<<dp[n]<<endl;
    }



    return 0;
}
