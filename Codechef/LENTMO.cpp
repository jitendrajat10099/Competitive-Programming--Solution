#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define pie 3.14
typedef long long int ll;
int main()
{
ios_base::sync_with_stdio(false); 
cin.tie(NULL);
ll t;
cin>>t;
while(t--)
{
    ll n,i,k,x,sum=0,c1=0,c2=0,a,b,sum1=0,mi=100000000000ll,sum2=0,xsum=0;
    ll arr[100002]={0};
    ll arr1[100002]={0};
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cin>>k>>x;
    for(i=0;i<n;i++)
    {
        sum=sum+arr[i];
        xsum=xsum+(arr[i]^x);
        arr1[i]=(arr[i]^x);
        a=(arr[i]^x)-arr[i];
        if(a>=0)
            b=a;
        else
            b=a*-1;
        if(b<=mi)
            mi=b;
        if(a>0)
        {
         c1++;
         sum1=sum1+(arr[i]^x);
        }
        else if(a<=0)
        {
            c2++;
            sum2=sum2+arr[i];
        }
    }
    if(k==n)
    {
        cout<<max(sum,xsum)<<"\n";
    }
    else
    {
        if(k%2==1)
        {
            cout<<(sum1+sum2)<<"\n";
        }
        else if(k%2==0)
        {
            if(c1%2==0)
                cout<<(sum1+sum2)<<"\n";
            else if(c1%2==1)
            {
                cout<<(sum1+sum2-mi)<<"\n";
            }
        }
    }

}
}

