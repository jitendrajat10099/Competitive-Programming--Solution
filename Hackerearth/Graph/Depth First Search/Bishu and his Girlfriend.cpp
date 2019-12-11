/*
https://www.hackerearth.com/practice/algorithms/graphs/depth-first-search/practice-problems/algorithm/bishu-and-his-girlfriend/
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int i,n,m,x,y,q;
        cin>>n;
        m=n-1;
        vector <int> g[n+1];
        for(i=0;i<m;i++)
        {
            cin>>x>>y;
            g[x].push_back(y);
            g[y].push_back(x);
        }

    
        queue<int> bfs;
        pair<bool,bool> visited[n+1];
        
        int* level=new int[n+1];

            
    
    for(i=1;i<=n;i++)
            visited[i].first=false,visited[i].second=false;
            
    cin>>q;
    for(i=0;i<q;i++)
    {
        cin>>x;
        visited[x].second=true;
    }
    
        bfs.push(1);
        visited[1].first=true;
        level[1]=0;
        
        while(!bfs.empty())
        {
            int p=bfs.front();
            bfs.pop();
            for(i=0;i<g[p].size();i++)
            {
                if(!visited[g[p][i]].first)
                {
                    bfs.push(g[p][i]);
                    visited[g[p][i]].first=true;
                    level[g[p][i]]=level[p]+1;
                }
            }
        }
    int minlevel=INT_MAX;
    int minid=INT_MAX;
    for(i=2;i<=n;i++)
    {
        if(!visited[i].second) //if no girl continue
            continue;
        if(level[i]<minlevel)
            minlevel=level[i],minid=i;
        else if(level[i]==minlevel && i<minid)
            minid=i;
    }
    cout<<minid;
}
