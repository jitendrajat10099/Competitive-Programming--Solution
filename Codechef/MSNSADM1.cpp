#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
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
    ll n,i,an=0,ma=0;
    ll aa[200]={0};
    ll bb[200]={0};
    cin>>n;
    for(i=0;i<n;i++)
        cin>>aa[i];
    for(i=0;i<n;i++)
        cin>>bb[i];
    for(i=0;i<n;i++)
    {
        an=20*aa[i]-bb[i]*10;
        an=max(0ll,an);
        if(an>ma)
            ma=an;
    }
    cout<<ma<<"\n";

}
}
