/*
https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/c-absolute-prime/

*/
#include <iostream>
using namespace std;
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
{
    prime();
    int t,n,i;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=n-1;i>=2;i--)
        {
            if(!sieve[i])
            continue;
            int sum=0,m=i;
            while(m)
            {
                sum+=m%10;
                m=m/10;
            }
            if(sieve[sum])
            {
                cout<<i<<endl;
                break;
            }
        }
    }



}
