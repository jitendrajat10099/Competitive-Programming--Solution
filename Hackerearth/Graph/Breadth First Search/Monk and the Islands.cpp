/*
https://www.hackerearth.com/practice/algorithms/graphs/breadth-first-search/practice-problems/algorithm/monk-and-the-islands/description/

We can use dijkstra but dfs is used because all edges have same cost

*/

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t,i,n,m,x,y;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        vector <int> g[n+1];
        for(i=0;i<m;i++)
        {
            cin>>x>>y;
            g[x].push_back(y);
            g[y].push_back(x);
        }
        queue<int> bfs;
        bool* visited=new bool[n+1];
        int* level=new int[n+1];
        for(i=1;i<=n;i++)
            visited[i]=false;
            
        bfs.push(1);
        visited[1]=true;
        level[1]=0;
        
        while(!bfs.empty())
        {
            int p=bfs.front();
            bfs.pop();
            for(i=0;i<g[p].size();i++)
            {
                if(!visited[g[p][i]])
                {
                    bfs.push(g[p][i]);
                    visited[g[p][i]]=true;
                    level[g[p][i]]=level[p]+1;
                }
            }
        }
        cout<<level[n]<<endl;
        
        
        
    }
    
    
}
