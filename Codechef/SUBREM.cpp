
#include <vector>
#include <algorithm>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
#define MAX 100010
typedef long long int ll;
vector<ll>adj[MAX];
bool visited[MAX];
ll arr[MAX]={0};
ll a[MAX]={0};

		/*
  ______                                          
 /      \                                         
|  $$$$$$\  ______   __    __   ______   _______  
| $$__| $$ /      \ |  \  |  \ |      \ |       \ 
| $$    $$|  $$$$$$\| $$  | $$  \$$$$$$\| $$$$$$$\
| $$$$$$$$| $$   \$$| $$  | $$ /      $$| $$  | $$
| $$  | $$| $$      | $$__/ $$|  $$$$$$$| $$  | $$
| $$  | $$| $$       \$$    $$ \$$    $$| $$  | $$
 \$$   \$$ \$$       _\$$$$$$$  \$$$$$$$ \$$   \$$
                    |  \__| $$                    
                     \$$    $$                    
                      \$$$$$$                     

   
		*/
///////////////////////////////////////
    int dfs(ll s,ll x) {
        visited[s] = true;
        if(adj[s].size()==1 && s!=1)
           { arr[s-1]=(ll)max(-x,a[s-1]);
           }
           else
           {
        for(ll i = 0;i < adj[s].size();++i)    {
         if(visited[adj[s][i]] == false)
             {dfs(adj[s][i],x);
            arr[s-1]+=arr[adj[s][i]-1];}
        }
        arr[s-1]=(ll)max(-x,arr[s-1]);
    }

    }
signed main()
{

ll t,n,x,a1,a2,i,k;
scanf("%lld",&t);
while(t--)
{
	scanf("%lld %lld",&n,&x);
	for(i=0;i<MAX;i++)
		adj[i].clear();

	for(i=0;i<n;i++)
		{
			scanf("%lld",&a[i]);
			arr[i]=a[i];
		}
	for(i=1;i<=(n-1);i++)
	{
		scanf("%lld %lld",&a1,&a2);
		adj[a1].push_back(a2);
		adj[a2].push_back(a1);
	}
        for(ll i = 0;i < MAX;++i)
         visited[i] = false;
	for(i=1;i<=n;i++)
	{
		if(visited[i]==false)
			dfs(i,x);
	}
	printf("%lld\n",arr[0]);
}
}
