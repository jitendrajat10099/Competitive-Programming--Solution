/*
Problem - https://www.hackerearth.com/practice/math/combinatorics/basics-of-combinatorics/practice-problems/algorithm/counting-stars-1/
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
ll mod=1000000007;
ll power(ll n,ll m)
{
	if(m==0)
	return 1;
	if(m==1)
	return n;
	ll p=power(n,m/2);
	if(m%2==0)
	return ((p%mod)*(p%mod))%mod;
	else
	return (((p*p)%mod)*(n%mod))%mod;
	
	
}
ll modinverse(ll x)
{
    return	power(x,mod-2);
}
 
 
int main() {
		fast
		ll factor[100000];
				factor[0]=1;
				for(ll i=1;i<100000-1;i++)
				{
				
				factor[i]=((factor[i-1]%mod)*(i%mod))%mod;
				
			}
			
			
				ll t;
				cin>>t;
				while(t--)
			{
			
				ll n,m;
				cin>>n>>m;
				if(m>n)
				cout<<"1"<<endl;
				else
				{
				ll c=n+m-1;
				ll total=(((factor[c])*modinverse(factor[n-1])%mod)*(modinverse(factor[m])%mod))%mod;
				ll p=((((factor[n])*modinverse(factor[n-m]))%mod)*(modinverse(factor[m])%mod))%mod;
				ll non=total-p+mod;
				ll result=((non%mod)*(modinverse(total)%mod))%mod;
				cout<<result<<endl;
				}
			}
	return 0;
} 