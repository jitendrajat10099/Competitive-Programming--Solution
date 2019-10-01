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
ll a[6],i,c=0,c1=0,b[6],x,y,ans;
string s;
cin>>s;
for(i=0;i<3;i++)
    a[i]=s[i]-'0';
for(i=3;i<6;i++)
    b[i-3]=s[i]-'0';
//cout<<a[2]<<b[0];
sort(a,a+3);
sort(b,b+3);
x=accumulate(a,a+3,0);
y=accumulate(b,b+3,0);
if(y>x)
{
    ans=y-x;
    while(ans>0)
    {
        ans=ans-(9-a[c++]);
    }
    ans=y-x;
    while(ans>0)
    {
        ans=ans-b[2-c1++];
    }
    //cout<<c<<c1<<endl;
    ans=min(c,c1);
    cout<<ans<<endl;
}
else
{
    c=0,c1=0;
    ans=x-y;
    while(ans>0)
    {
        ans=ans-(9-b[c++]);
    }
    ans=x-y;
    while(ans>0)
    {
        ans=ans-a[2-c1++];
    }
   // cout<<c<<c1<<endl;
    ans=min(c,c1);
    cout<<ans<<endl;
}
}
