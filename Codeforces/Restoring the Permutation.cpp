/*
    Link to the problem statement - https://codeforces.com/contest/1506/problem/E
*/


#include<bits/stdc++.h>
using namespace std;
 
#define fast() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define fr(i,n) for(int i=0;i<n;i++)
#define int long long
 
void solve(){

    int n;
    cin>>n;

    vector<int>a(n);
    fr(i,n)
        cin>>a[i];
    
    vector<bool>vis(n+1, false), vis2(n+1, false);
    vector<int>small(n),big(n);

    small[0] = a[0];
    big[0] = a[0];
    int largeind = a[0]-1;
    int smallind=1;
    vis[a[0]] = true;
    vis2[a[0]] = true;

    for(int i=1;i<n;i++)
    {
        if(a[i] != a[i-1])
        {
            small[i] = a[i];
            vis[a[i]] = true;

        }

        else
        {
            while(vis[smallind])
                smallind++;
            
            small[i] = smallind;
            vis[smallind] = true;
            smallind++;
        }
    }

    for(int i=1;i<n;i++)
    {
        if(a[i] != a[i-1])
        {           
            big[i] = a[i];
            vis2[a[i]] = true;
            largeind = a[i]-1;
        }

        else
        {
            while(vis2[largeind])
                largeind--;
            
            big[i] = largeind;
            vis2[largeind] = true;
            largeind--;
        }
    }

    fr(i,n)
        cout<<small[i]<<" ";
    cout<<'\n';

    fr(i,n)
        cout<<big[i]<<" ";
    cout<<'\n';

    
}
 
int32_t main(){
 
    fast();
    int t;
    cin>>t;
 
    while(t--){
        solve();
    }
}