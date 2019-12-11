/*
https://www.hackerearth.com/practice/algorithms/graphs/depth-first-search/tutorial/
*/

#include <bits/stdc++.h>
using namespace std;
void dfs(int s,vector <int> g[],bool visited[])
{
    stack <int> st;
    st.push(s);
    visited[s]=true;
    while(!st.empty())
    {
        int top = st.top();
        bool flag=true;
        for(int x=0;x<g[top].size();x++)
        {
            if(! visited[ g[top][x] ] )
            {
                st.push(g[top][x]);
                visited [ g[top][x] ]=true;
                flag=false;
                break;
            }
        }
        if(flag)
            st.pop();
    }  
}
int main() {
    int n,m,i,u,v,x;
    
    cin>>n>>m;
    
    vector <int> g[n+1];
    
    for(i=0;i<m;i++)
    {
        cin>>u>>v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    cin>>x;
    
    bool visited[n+1];
    for(i=0;i<=n;i++)
        visited[i]=false;
        
    dfs(x,g,visited);
    int  ans=0;
    for(i=1;i<=n;i++)
        if(!visited[i]) ans++;
    
    cout<<ans;
    

}
