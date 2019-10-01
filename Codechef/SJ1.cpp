#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define pie 3.14
typedef long long int ll;
vector<ll>adj[100005];
bool visited[100005];
ll v[100005]={0};
ll ans[100005];

		/*
		_____
		|   |   | /
        |___|   |/
		|   |   |\
		|   | . | \ .
		*/
///////////////////////////////////////
ll gcd(ll a,ll b)
{
	if(b==0)
		return a;
	return gcd(b,a%b);
}
void dfs(ll s)
{
	visited[s]=true;
	for(ll i=0;i<adj[s].size();++i)
	{
		if(visited[adj[s][i]]==false)
		{
			ans[adj[s][i]]=gcd(max(ans[s],v[adj[s][i]]),min(ans[s],v[adj[s][i]]));
			//cout<<v[adj[s][i]]<<" "<<ans[adj[s][i]]<<" "<<ans[s]<<endl;
			dfs(adj[s][i]);
		}
	}
}    
    void initialize() 
    {
        for(ll i = 0;i < 100005;++i)
         visited[i] = false;
    }
int main()
{
ios_base::sync_with_stdio(false); 
cin.tie(NULL);

ll t,a,b,n;
cin>>t;
while(t--)
{

	ll m[100005]={0};
	ll arr[100005]={0};
	cin>>n;
	for(ll i=0;i<100005;i++)
		{
			adj[i].clear();
			arr[i]=0;
		}
	for(ll i = 0; i < (n-1); ++i) {
		cin>>a>>b;
		adj[a].push_back(b);
		adj[b].push_back(a);
		arr[a]++;
		arr[b]++;
	}
	for(ll i=1;i<=n;i++)
		cin>>v[i];
	for(ll i=1;i<=n;i++)
		cin>>m[i]; 
		ans[1]=v[1];
	initialize();
     dfs(1);
for(ll i=1;i<=n;i++)
{
	if(arr[i]==1 && i!=1)
	{
      cout<<(m[i]-gcd(ans[i],m[i]))<<" ";
	}
}
cout<<"\n";
}
}
