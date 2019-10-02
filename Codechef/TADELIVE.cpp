#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define pie 3.14
typedef long long int ll;
/*
 .d8b.  d8888b. db    db  .d8b.  d8b   db 
d8' `8b 88  `8D `8b  d8' d8' `8b 888o  88 
88ooo88 88oobY'  `8bd8'  88ooo88 88V8o 88 
88~~~88 88`8b      88    88~~~88 88 V8o88 
88   88 88 `88.    88    88   88 88  V888 
YP   YP 88   YD    YP    YP   YP VP   V8P 
                                          
                                          
*/


///////////////////////////////////////
int main()
{
ios_base::sync_with_stdio(false); 
cin.tie(NULL);
#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif
ll n,a,b,x,y,i,ans=0;
    vector<ll>v1;
    vector<ll>v2;
    vector<pair<ll,ll>>v3;
cin>>n>>a>>b;
for(i=0;i<n;i++)
{
    cin>>x;
    v1.push_back(x);
}
for(i=0;i<n;i++)
{
    cin>>y;
    v2.push_back(y);
}
for(i=0;i<n;i++)
{
    v3.push_back({abs(v1[i]-v2[i]),i});
}
sort(v3.begin(),v3.begin()+n);
reverse(v3.begin(),v3.begin()+n);
ll c1=0,c2=0,index;

while((a>=1 || b>=1)&&(c1<n))
{
    index=v3[c1].second;
    c1++;
    //cout<<ans<<" "<<a<<" "<<b<<"\n";
    if(a==0)
    {
        b--;
        ans+=v2[index];
        continue;
    }
    if(b==0)
    {
        a--;
        ans+=v1[index];
        continue;
    }
    if(v2[index]>v1[index])
    {
        b--;
        ans+=v2[index];
    }
    else
    {
        a--;
        ans+=v1[index];
    }
    
    
}
cout<<ans<<"\n";
}
