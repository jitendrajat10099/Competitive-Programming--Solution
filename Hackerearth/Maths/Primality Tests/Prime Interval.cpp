/*
Problem - https://www.hackerearth.com/practice/math/number-theory/primality-tests/practice-problems/algorithm/prime-interval/

*/
#include <iostream>
#include <algorithm>
using namespace std;
typedef long long ll;
int sieve[1000001];
void prime()
{  int n=1000000,i,j;
  sieve[0]=0;
  sieve[1]=0;
  for(i=2;i<=n;i++)
   sieve[i]=1;
  for(i=2;i*i<=n;i++)
  { if(sieve[i]!=0)
     { 
  	for(j=i*i;j<=n;j+=i)
  	sieve[j]=0;
    }
  }
}
int main()
{  prime();
  int l,r,i;
  cin>>l>>r;
  for(i=l;i<=r;i++)
  if(sieve[i])
   cout<<i<<" ";
  
}
