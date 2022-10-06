/*
    Link to the problem statement - https://codeforces.com/contest/1528/problem/B
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
    
    sort(a.begin(), a.end());

    int count=0;
    int prev=-1;
    bool first=true;
    int minCount=1e18;
    bool zero=false;
    bool diffound = false;

    fr(i,n)
    {
        if(a[i] < 0)
        {
            if(!first)
            {
                minCount = min(minCount, abs(a[i] - prev));
                diffound = true;
            }

            else
            {
                first = false;
            }
            
            prev=a[i];
            count++;
        }

        else if(a[i] == 0)
        {
            if(!first)
            {
                 minCount = min(minCount, abs(a[i] - prev));
            }

            if(prev != 0)
            {
                prev=0;
            }

            else
            {
                zero = true;
            }

            count++;
        }

        else
        {
            if(a[i] <= minCount || !diffound)
            {
                if(!zero)
                count++;
            }

            break;
        }
    }

    cout<<count<<'\n';
}
 
int32_t main(){
 
    fast();
    int t;
    cin>>t;
 
    while(t--){
        solve();
    }
}