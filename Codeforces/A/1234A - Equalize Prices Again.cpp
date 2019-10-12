/*
https://codeforces.com/contest/1234/problem/A

*/

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main()
{
  
 
    ll q,n;
    ll a,i,sum;
    // cin>>q;
    scanf("%lld",&q);
    while(q--)
    {
        // cin>>n;
        scanf("%lld",&n);
        sum=0;
        for(i=0;i<n;i++)
        {
            scanf("%lld",&a);
            sum+=a;
        }
        // cout<<ceil(sum/n)<<endl;
        ll ans=ceil((double)sum/n);
        printf("%lld\n",ans);
    }
 
 
