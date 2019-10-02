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
    ll n,x,y,i;
    ll arr[100005]={0};
    ll arr1[100005]={0};
    ll ans[100005]={0};
    ll pre[100005]={0};
    cin>>n;
    for(i=0;i<n;i++)
        cin>>arr[i];
    for(i=0;i<n;i++)
        cin>>arr1[i];
    for(i=0;i<n;i++)
    {
        x=max(1ll,i+1-arr[i])-1;
        y=min(n,i+1+arr[i]);
        ans[x]+=1;
        ans[y]+=-1;
    }
    for(i=0;i<n;i++)
    {
        pre[i]=pre[i-1]+ans[i];
    }
    // for(i=0;i<n;i++)
    //     cout<<pre[i]<<" ";
    sort(pre,pre+n);
    sort(arr1,arr1+n);
    ll flag=1;
    for(i=0;i<n;i++)
    {
        if(pre[i]!=arr1[i])
        {
            flag=0;
        }
    }
    if(flag==1)
        cout<<"YES\n";
    else
        cout<<"NO\n";

}
}
