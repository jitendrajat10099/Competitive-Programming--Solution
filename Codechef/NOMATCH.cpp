#include <bits/stdc++.h>
using namespace std;
int main()
{
    long int t,n,i;
    long long int sum;
    long long int a[100000];
    scanf("%ld",&t);
    while(t--)
    {
        sum=0;
      scanf("%ld",&n);
      for(i=0;i<n;i++)
      {
          scanf("%lld",&a[i]);
      }
sort(a, a+n);
for(i=0;i<(n/2);i++)
{
    sum=sum+(a[n-1-i]-a[i]);
}
printf("%lld\n",sum);
    }
}

