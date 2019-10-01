#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define pie 3.14
typedef long long int ll;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll t;
cin>>t;
while(t--)
{
    ll n,q,l,r,i;
    ll arr[200005]={0};
    ll pre[200005]={0};
    string s;
    cin>>n>>q;
    cin>>s;
    for(i=1;i<n;i++)
    {
        if(i>=2)
        {
        if(s[i]==s[i-1] || s[i]==s[i-2])
            arr[i]=1;
        }
        else if(s[i]==s[i-1])
            arr[i]=1;
    }
    pre[0]=arr[0];
    for(i=1;i<n;i++)
        pre[i]=pre[i-1]+arr[i];
    while(q--)
    {
        cin>>l>>r;
        if(pre[r-1]-pre[l-1]>0 && (r-l+1)>=3)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }

}
}


