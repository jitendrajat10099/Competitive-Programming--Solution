#include<bits/stdc++.h>
using namespace std;
int vis[100005]={0};
int ans;
vector<int> adj[100005];
int dfs(int v)
{
    vis[v]=1;
    ans=ans+4-adj[v].size();
    for(auto it=adj[v].begin();it!=adj[v].end();it++)
    {
        if(vis[*it]==0)
            dfs(*it);
    }
}
int main()
{
   
    int t,n,m,k,c=0,f1,f2,f3,f4,g,h,i;
    scanf("%d",&t);
    while(t--)
    {
    map<pair<int,int>,int>mp;
    int a[100005];
    int b[100005];
        ans=0;
        for(i=0;i<100005;i++)
        {
            adj[i].clear();
            vis[i]=0;
        }
        c=0;
        scanf("%d %d %d",&n,&m,&k);
        for(i=1;i<=k;i++)
        {
            scanf("%d %d",&a[i],&b[i]);
                mp[make_pair(a[i],b[i])]=i;

        }
        for(i=1;i<=k;i++)
        {
            if(mp.find(make_pair(a[i],b[i]+1))!=mp.end())
                adj[i].push_back(mp[make_pair(a[i],b[i]+1)]);
            if(mp.find(make_pair(a[i]-1,b[i]))!=mp.end())
                adj[i].push_back(mp[make_pair(a[i]-1,b[i])]);
            if(mp.find(make_pair(a[i],b[i]-1))!=mp.end())
                adj[i].push_back(mp[make_pair(a[i],b[i]-1)]);
            if(mp.find(make_pair(a[i]+1,b[i]))!=mp.end())
                adj[i].push_back(mp[make_pair(a[i]+1,b[i])]);
        }
        for(i=1;i<=k;i++)
        {
            if(vis[i]!=1)
            {
                dfs(i);
            }
        }
        printf("%d\n",(ans));

    }
}
