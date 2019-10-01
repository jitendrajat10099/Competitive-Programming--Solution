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
ll ma[1000]={0};
ll root=-1;
ll fuc(ll s,ll l,ll root,ll x)
{
    if(s==l)
   {
    ma[s]=root;
    return 0;
   }
    string str;
    ll i;
    if(x==0)
    {
    for(i=l;i>=s;i--)
    {
        cout<<"Q "<<i<<" "<<s<<" "<<l<<endl;
        cin>>str;
        if(str=="Yes")
        {
            ma[i]=root;
            break;
        }
    }
}
else if(x==1)
{
    for(i=l;i>=s;i--)
    {
        cout<<"Q "<<i<<" "<<s<<" "<<l<<endl;
        cin>>str;
        if(str=="Yes")
        {
            ma[i]=root;
            break;
        }
    }
}
else if(x==2)
{
    for(i=s;i<=l;i++)
    {
        cout<<"Q "<<i<<" "<<s<<" "<<l<<endl;
        cin>>str;
        if(str=="Yes")
        {
            ma[i]=root;
            break;
        }
    }
}
        if((i-1)>=s)
        fuc(s,i-1,i,1);
        if((i+1)<=l)
        fuc(i+1,l,i,2);
}
int main()
{
#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif
ll t;
cin>>t;
while(t--)
{
    ll n,i;
    root=-1;
    for(i=0;i<101;i++)
        ma[i]=0;
    cin>>n;
    ll s=1,l=n;
    fuc(s,l,-1,0);
    cout<<"A ";
    for(i=1;i<=n;i++)
        cout<<ma[i]<<" ";
    cout<<endl;
}
}
