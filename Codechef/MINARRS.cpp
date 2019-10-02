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
    ll n,i,c=0,rem,k,k1;
    ll arr[100005]={0};
    ll a[100005]={0};
    ll b[100005]={0};
    ll mo=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
        k=arr[i];
        k1=k;
        /*while(k1!=0)
        {
            dig++;
            k1=k1/2;
        }*/
        c=0;
        while(k!=0)
        {
            rem=k%2;
            if(rem==1)
                a[c++]++;
            else
                c++;
            k=k/2;
        }
    }
    for(i=0;i<100005;i++)
        //cout<<a[i]<<" ";
   // cout<<endl;
    for(i=0;i<100005;i++)
    {   
            if(a[i]!=0)
             {
                b[i]=n-a[i];
            }
    }
    for(i=0;i<100005;i++)
    {
        if(a[i]>b[i])
            mo=mo+1*(ll)ceil(pow(2,i));
        else
            mo=mo+0*(ll)ceil(pow(2,i));
    }
    //cout<<mo<<endl;
    ll sum=0;
    for(i=0;i<n;i++)
    {
        sum=sum+(arr[i]^mo);
        //cout<<(arr[i]^mo)<<endl;
    }
    cout<<sum<<endl;

}
}
