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
    cout<<fixed;
    cout<<setprecision(6)<<"\n";
    ll n,x;
    cin>>x;
    if(x>=5)
        cout<<1.0<<"\n";
    else if(x==4)
        cout<<(6/7.0)<<"\n";
    else if(x==3)
        cout<<(5/7.0)<<"\n";
    else if(x==2)
        cout<<(4/7.0)<<"\n";
    else if(x==1)
        cout<<(3/7.0)<<"\n";

}
}
