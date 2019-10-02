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
    ll n,i,x,c=0,ans1=0,ans2=0;
    priority_queue<ll>pq;
    map<ll,ll>ma;
    cin>>n;
    for(i=0;i<n;i++)
        {
            cin>>x;
            ma[x]++;
            pq.push(x);
        }
        while(!pq.empty())
        {
            x=pq.top();
            //cout<<x<<"\n";
            if(x==0)
                break;
            if(ma[x]==0)
                pq.pop();
            if(ma[x]>1 && ma.count(x))
            {
                c++;
                ma[x]=0;
                pq.pop();
            }
            if(ma[x]==1)
            {
                c++;
             pq.pop();
             pq.push(x/2);
             ma[x/2]++;
             if(c%2==1)
                ans1=ans1+x;
            else
                ans2=ans2+x;
            }
        }
        //cout<<ans1<<"\n";
        //cout<<ans2<<"\n";
        if(ans2>=ans1)
            cout<<"Hazardous\n";
        else
            cout<<"Cherry "<<(ans1-ans2)<<"\n";
        ma.clear();

}
}
