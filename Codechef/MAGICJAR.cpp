#include<stdio.h>
int main()
{
    long long int t,sum,i,n,x;
    scanf("%lld",&t);
    while(t--)
    {
        sum=0;
        scanf("%lld",&n);
        for(i=0;i<n;i++)
        {
            scanf("%lld",&x);
            sum=sum+(x-1);
        }
        ++sum;
        printf("%lld\n",sum);
    }
}

