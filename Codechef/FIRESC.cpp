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
vector<ll>adj[200005];
bool check[200005];
ll c=0;
ll dfs(ll n)
{
    ll i;
    c++;
    //cout<<n<<endl;
    check[n]=true;
        for(i=0;i<adj[n].size();i++)
        {
            if(check[adj[n][i]]==false)
                dfs(adj[n][i]);
        }
        return 0;
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
    ll n,m,i,ans=1,pt=0;
    cin>>n>>m;
    for(i=1;i<=n;i++)
    {
        adj[i].clear();
        check[i]=false;
    }

    for(i=0;i<m;i++)
    {
        ll x,y;
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    for(i=1;i<=n;i++)
    {
        if(check[i]==false)
        {
        c=0;
        dfs(i);
        ans=(ans%mod)*(c%mod);
        ans=ans%mod;
        pt++;
        }
    }
    cout<<pt<<" "<<ans<<"\n";
}
}
