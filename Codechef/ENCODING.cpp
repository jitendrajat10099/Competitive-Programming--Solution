#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define pie 3.14
typedef long long int ll;
ll power(ll n,ll x)
{
    ll po=1;
    while(x!=0)
    {
        if(x%2==1)
        {
            po=(po%mod)*(n%mod);
            po=po%mod;
            x--;
        }
        n=(n%mod)*(n%mod);
        n=n%mod;
        x=x/2;
    }
    return po%mod;
}
ll arrr[100003];
ll getmyans(ll sum,ll x)
{
ll ans=0;
ans=x%mod*((x+1)%mod);
ans=ans%mod;
ans=ans*500000004ll;//Modulo inverse of 2;
ans=ans%mod;
ans=(ans-sum%mod+mod)%mod;
return ans;
}
ll modular(string arr,ll n,ll an[])
{
    ll a=0,b=0,sum=0,l=0,m=0,i=0,ans=0;
    ll zzz=0;
    for(i=0;i<n-1;i++)
    {
        a=arr[i]-'0';
        b=arr[i+1]-'0';
        if(a<b)
        {
        zzz=(a%mod*(a+1)%mod)%mod;
        zzz=power(10,(n-i-2)*2)%mod*zzz%mod;
        zzz=zzz%mod;
        zzz=(zzz*500000004ll)%mod;
        sum=(sum+zzz%mod)%mod;
        }
        if(a==b)
        {
        l=n-i-2;
        m=an[l-1];
        if((l-1)<0)
        m=0;
        zzz=a%mod*(a-1)%mod;
        zzz=zzz%mod;
        zzz=(power(10,(n-i-2)*2)%mod*(zzz%mod));
        zzz=zzz%mod;
        zzz=(zzz*500000004ll)%mod;
        sum=(sum+zzz%mod)%mod;
        zzz=(a%mod*(m+1)%mod)%mod;
        zzz=zzz%mod;
        zzz=zzz*power(10,(n-i-2));
        zzz=zzz%mod;
        sum=((sum+zzz)%mod);
        }
        if(a>b)
        {
        zzz=a%mod*(a-1)%mod;
        zzz=zzz%mod;
        zzz=power(10,(n-i-2)*2)%mod*(zzz%mod);
        zzz=zzz%mod;
        zzz=(zzz*500000004ll)%mod;
        sum=((sum+zzz%mod)%mod);
        }
     if((n-3-i)>=0)
     {
        zzz=arrr[n-3-i]%mod*(a%mod);
        zzz=zzz%mod;
        sum=sum%mod+zzz;
        sum=sum%mod;
    }
}
ans=getmyans(sum,an[n-1]);
return ans%mod;
}
ll removeZero(string arr,ll number1)
{
    ll i,zero=0;
    for(i=0;i<number1;i++)
{
    if(arr[i]=='0')
        zero++;  
    else
        break;
}
return zero;
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
arrr[0]=45;
for(ll i=1;i<100003;i++)
{
    arrr[i]=(45*power(10,2*i))%mod;
    arrr[i]=arrr[i]%mod+(arrr[i-1]*10)%mod;
    arrr[i]=arrr[i]%mod;
}
while(t--)
{
    ll number1,number2,i,a=0,myans=0;
    string arr1,arr2;
    ll k,an1[100003]={0},an2[100003]={0};
    cin>>number1>>arr1;
    cin>>number2>>arr2;
for(i=number1-1;i>=0;i--)
{
    if(arr1[i]!='0')
    {
        arr1[i]=arr1[i]-1;
        break;
    }
    else
        arr1[i]='9';
}
ll zero;
ll ans=0;
zero=removeZero(arr1,number1);
arr1=arr1.substr(zero,number1);
number1=arr1.length();
for(i=number1-1;i>=0;i--)
{
    a=arr1[i]-'0';
    ans=ans+a*power(10,number1-i-1);
    ans=ans%mod;
    an1[number1-i-1]=ans;
}
ans=0;
for(i=number2-1;i>=0;i--)
{
    a=arr2[i]-'0';
    ans=ans+a*power(10,number2-i-1);
    ans=ans%mod;
    an2[number2-i-1]=ans;
}
myans=(modular(arr2,number2,an2)-modular(arr1,number1,an1)+mod)%mod;
    cout<<myans<<"\n";
}
}


