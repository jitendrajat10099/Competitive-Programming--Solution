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
ll rev(ll num) 
{ 
    ll rev_num = 0; 
    while(num > 0) 
    { 
        rev_num = rev_num*10 + num; 
        num = num/10; 
    } 
    return rev_num; 
} 
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
    ll n,c=0,n1,ma=0,a,b,i,x,ans,r,flag=1,d=0,j,d1;
    ll arr[100005]={0};
    cin>>n;
    n1=n;
    while(n1!=0)
    {
        r=n1;
        arr[c++]=r;
        n1=n1/10;
    }
    //cout<<c<<endl;
    a=round(pow(10,c));
    for(i=0;i<c-1;i++)
    {
        if(arr[i]==9)
            d++;
     if(arr[i+1]!=1)
     {
       arr[i]=9;
     }
     else if(arr[i+1]==1)
     {
        flag=0;
        arr[i+1]=0;
        arr[i]=9;
     }
    }
    //cout<<d<<endl;
    if(flag==1 && d!=c)
        arr[c-1]=arr[c-1]-1;
    //cout<<arr
    for(i=c-1;i>=0;i--)
    {
        if(arr[i]==0)
            i--;
        else
            break;
    }
    i++;
    for(;i>=0;i--)
        cout<<arr[i];
    cout<<"\n";
}
}
