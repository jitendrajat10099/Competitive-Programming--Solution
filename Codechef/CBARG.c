#include<stdio.h>
int main()
{
    long long int t,sum,i,n;
    long long int a[100000];
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld",&n);
        for(i=0;i<n;i++)
        {
            scanf("%lld",&a[i]);
        }sum=a[0];
        for(i=1;i<n;i++)
        {
            if(a[i]>a[i-1])
                sum=sum+a[i]-a[i-1];
        }
            printf("%lld\n",sum);
    }
}

