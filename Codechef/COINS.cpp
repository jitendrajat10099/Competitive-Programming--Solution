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
ll a[100000]={0};
ll fuc(ll n)
{
     if(n<100000)
     {
      return a[n];
     }
     else
        return max(n,(fuc(n/2)+fuc(n/3)+fuc(n/4)));
}
int main()
{
ios_base::sync_with_stdio(false); 
cin.tie(NULL);
#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif
ll n,x,i;
for(i=0;i<100000;i++)
{
   x=a[i/2]+a[i/3]+a[i/4];
   if(x>i)
    a[i]=x;
else
    a[i]=i;
}
while(cin>>n)
cout<<fuc(n)<<"\n";
}
