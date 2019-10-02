#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long int ll;
ll _gcd(ll a, ll b) 
{ 
    if (a == 0) 
        return b; 
    return _gcd(b%a, a); 
} 
ll remove(ll arr[], ll n) 
{ 
    if (n==0 || n==1) 
        return n; 
    ll temp[n]; 
    ll j = 0; 
    for (ll i=0; i<n-1; i++) 
        if (arr[i] != arr[i+1]) 
            temp[j++] = arr[i]; 
    temp[j++] = arr[n-1]; 
    for (ll i=0; i<j; i++) 
        arr[i] = temp[i]; 
    return j; 
} 
int main()
{
ios_base::sync_with_stdio(false); 
cin.tie(NULL);
ll t;
cin>>t;
while(t--)
{
ll n,i,x,y,gcd=0;
ll arr[100001];
cin>>n;
for(i=0;i<n;i++)
cin>>arr[i];
sort(arr,arr+n);
n=remove(arr,n);
for(i=0;i<n-2;i++)
gcd=_gcd(gcd,arr[i]);
x=_gcd(gcd,arr[n-2]);
y=_gcd(gcd,arr[n-1]);
if(n>1)
cout<<max((x+arr[n-1]),(y+arr[n-2]))<<"\n";
else
cout<<(y+arr[0])<<"\n";

}
}
