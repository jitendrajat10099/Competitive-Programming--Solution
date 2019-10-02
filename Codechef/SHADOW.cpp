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
    ll a,b,l,r,x1,y1,x2,y2,z1=0,z2=0,ans,sum=0,c1,c2,sum1=0,sum2=0,g,x3,y3,z3=0,sum3=0;
    cin>>a>>b>>l>>r;
    ll temp;
    if(l>=r)
    {
     temp=l;
     l=r;
     r=temp;
    }
    x1=ceil((double)l/a)*a;
    y1=floor((double)r/a)*a;
    z1=(y1-x1)/a+1;
   sum1=z1*(x1+y1)/2;
    x2=ceil((double)l/b)*b;
    y2=floor((double)r/b)*b;
    z2=(y2-x2)/b+1;
    sum2=z2*(x2+y2)/2;
    sum=sum1+sum2;
    //cout<<sum<<"\n";
    g=((a*b)/(__gcd(a,b)));
    x3=ceil((double)l/g)*g;
    y3=floor((double)r/g)*g;
    z3=((y3-x3)/g)+1;
    sum3=z3*(x3+y3)/2;
    c1=abs(sum-sum3);
    //cout<<c1<<"\n";
    if(c1%2==0 && (sum%3==0 || sum%2==0))
        cout<<"TRUE LOVE\n";
   else if((sum%3!=0 && sum%2!=0) && c1%2!=0)
    cout<<"FAKE LOVE\n";
  else
    cout<<"LOVE\n";


}
}
