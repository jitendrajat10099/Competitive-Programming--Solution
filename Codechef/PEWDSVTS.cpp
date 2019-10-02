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
ll t;
cin>>t;
while(t--)
{
    ll n,a,b,x,y,z,q,el,c=0,am1=0,am2=0,day;
    priority_queue<ll>pq;
    cin>>n>>a>>b>>x>>y>>z;
    for(ll i=0;i<n;i++)
    {
        cin>>q;
        pq.push(q);
    }   
    day=(z-b)/y;
    //cout<<day<<endl;
    am1=a+day*x;
    //cout<<am1<<endl;
    while(am1<z && pq.top()!=0)
    {
   el=pq.top();
   am1=am1+el;
   //cout<<am1<<endl;
   pq.pop();
   el=el/2;
   pq.push(el);
   c++;
    }
    //cout<<am1;
    if(am1>=z)
        cout<<c<<"\n";
    else
        cout<<"RIP\n";
    }
    }

