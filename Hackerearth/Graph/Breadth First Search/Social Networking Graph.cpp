/*
https://www.hackerearth.com/practice/algorithms/graphs/breadth-first-search/practice-problems/algorithm/social-networking-graph/description/
*/

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int levelofnode(int s,vector<int>g[],int N,int x)
{
    bool* visited=new bool[N];
    for(int i=0;i<N;i++)
        visited[i]=false;
    //make this global whenever required
    int level[N]; //to store level of each vertices
    queue <int>q;
    q.push(s);
    visited[s]=true;
    level[s]=0; //level of node=0
    while(!q.empty())
    {
        int front=q.front();
        q.pop();
        for(int i=0;i<g[front].size();i++)
        {
            if(! visited[g[front][i] ])
            {
                q.push(g[front][i]);
                visited[g[front][i]]=true;
                level[g[front][i]]=level[front]+1;
            }
        }
    }
    int ans=0;
    for(int i=0;i<N;i++)
    {
        if(level[i]==x)
            ans++;
    }
    return ans;
}
int main()
{
    int n,e,i,u,v;
    cin>>n>>e;
    vector<int> g[n];
    for(i=0;i<e;i++)
    {
        cin>>u>>v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    int m;
    cin>>m;
    while(m--)
    {
        cin>>u>>v;
        cout<<levelofnode(u,g,n,v)<<endl;
    }
    
}
