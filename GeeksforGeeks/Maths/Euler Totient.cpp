// https://practice.geeksforgeeks.org/problems/euler-totient/0

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<long,long> pll;
bool sieve[1000001];
void prime()
{  int n=1000000,i,j;
  sieve[0]=0;
  sieve[1]=0;
  for(i=2;i<=n;i++)
   sieve[i]=1;
  for(i=2;i*i<=n;i++)
  { if(sieve[i])
     { 
  	for(j=i*i;j<=n;j+=i)
  	sieve[j]=false;
    }
  }
}
int main()
{
    prime();
    ll t,n,i;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ll a=1;
        ll ans=1;
        for(i=2;i<=n && a<n;i++)
        {
            if(sieve[i])
                a=a*i;
            if(a<=n)
                ans=a;              
        }
        cout<<ans<<'\n';

    }
}
