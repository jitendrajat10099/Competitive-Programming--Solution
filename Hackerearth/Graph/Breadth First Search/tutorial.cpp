/*
https://www.hackerearth.com/practice/algorithms/graphs/breadth-first-search/tutorial/
*/

#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int n,i,a,b,x;
    cin>>n;
    vector <int> graph[n+1];
    for(i=0;i<n-1;i++)
    {
        cin>>a>>b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    cin>>x;
    
    //bfs
    int ans=0;
    bool* visited = new bool[n+1];
    memset(visited, false, sizeof(visited));
    queue <int> q;
    q.push(1);
    visited[1]=true;
    int level[100000];
    level[1]=1;
    while(!q.empty())
    {
        int front=q.front();
        q.pop();
        if(level[front]==x)
            ans++;
        if(level[front]>x)
            break;
        for(i=0;i<graph[front].size();i++)
        {
            if(!visited[ graph[front][i] ])
            {
                q.push(graph[front][i]);
                level[graph[front][i]]=level[front]+1;
                visited[graph[front][i]]=true;
            }
        }
    }
    
    cout<<ans;
    
}
