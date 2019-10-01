#include<stdio.h>
int main()
{
    long long int t,n,sum,i;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld",&n);
        sum=0;
        for(i=1;(i*i)<=n;i++)
        {
         if(n%i==0)
         {      if(i!=(n/i))
                sum=sum+i+(n/i);
                else
                    sum=sum+i;
         }
        }
        printf("%lld\n",sum);
    }
}

