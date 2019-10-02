#include<bits/stdc++.h>
using namespace std;
int main()
{
long long int t,i,n,c=0,d=0,j;
long long int a[100005]={0};
long long int b[100005]={0};
scanf("%lld",&t);
while(t--)
{
    c=0;d=0;
    scanf("%lld",&n);
    for(i=0;i<n;i++)
      scanf("%lld %lld",&a[i],&b[i]);
        sort(a,a+n);
        sort(b,b+n);
        for(i=0,j=0;(i<n&&j<n);)
        {
         if(a[i]<b[j])
         {
             c++;
             i++;
         }
         else if(a[i]>b[j])
         {
             c--;
             j++;
         }
         else if((a[i]==b[j]))
         {
          if(a[i+1]==a[j+1] && (a[i+1]!=a[i] && i<(n-1)))
          {
            d++;
          }
         i++;
          j++;
          continue;
         }
        if(c==0)
            d++;
        }
        printf("%lld\n",d+2);
}

}


