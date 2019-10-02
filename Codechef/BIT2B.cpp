#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define pie 3.14
typedef long long int ll;
/*
 .d8b.  d8888b. db    db  .d8b.  d8b   db 
d8' `8b 88  `8D `8b  d8' d8' `8b 888o  88 
88ooo88 88oobY'  `8bd8'  88ooo88 88V8o 88 
88~~88 88`8b      88    88~~88 88 V8o88 
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
ll t;
cin>>t;
while(t--)
{
ll n,i,sum=0,a=0;
vector<ll>v1;
ll x;
vector<ll>v;
cin>>n;
for(i=0;i<n;i++)
    {
        cin>>x;
        v.push_back(x);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+v[i];
        v1.push_back(sum); //prefix sum
    }
cin>>x;
ll m1,m2,pt=0;
for(i=n-1;i>=0;i--)
{
ll z;
a=a+v[i];
z=upper_bound(v1.begin(),v1.end(),a*x)-v1.begin();
if(v1[z-1]==a*x)
{
    pt=1;
}
else
pt=0;
m1=z-1+1;
m2=n-i;
if(m1+m2>=n)
{
    cout<<n-m2<<" "<<m2<<"\n";
    break;
}
else if(m1+m2+1==n && pt==1)
{
    if(m1>=m2)
        cout<<m1+1<<" "<<m2<<"\n";
    else
        cout<<m1<<" "<<m2+1<<"\n";
    break;
}
else if(m1+m2+1==n  && pt==0)
{
    cout<<m1+1<<" "<<m2<<"\n";
    break;
}
else if(m1+m2+2==n && pt==0) //&pt=1 is not needed
{
    cout<<m1+1<<" "<<m2+1<<"\n";
    break;
}
}
//cout<<"hello\n";
    v.clear();
    v1.clear();
}
}
