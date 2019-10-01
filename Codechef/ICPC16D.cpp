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
    ll n,i,sum=0,x,c=0,l,j;
    cin>>n;
    ll arr[1000000]={0};
    ll ne[1000000]={0};
    for(i=0;i<n;i++)
    {
        
        cin>>arr[i];
        ne[arr[i]]=1;
    }
       sort(arr,arr+n);
    for(i=0;i<n;i++)
    {
        for(j=2*arr[i];j<1000000;j+=arr[i])
        {
            if(ne[j]>0)
            {
                ne[j]=(ne[j]%mod)+(ne[arr[i]]%mod);
                ne[j]=ne[j]%mod;
                //cout<<j<<" "<<ne[j]<<" ";
            }
        }
    }

    for(i=0;i<1000000;i++)
    {
        sum=(sum%mod)+(ne[i]%mod);
        sum=sum%mod;
    }
    cout<<sum<<"\n";

    
}
}
