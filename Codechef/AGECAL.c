#include<stdio.h>
int main()
{
    long long int t,n,sum,i,c,d,e,x,y,z,sum1;
    long long int a[100000];
    scanf("%lld",&t);
    while(t--)
    {
        sum=0;sum1=0;
        scanf("%lld",&n);
        for(i=0;i<n;i++)
        {
            scanf("%lld",&a[i]);
            sum=sum+a[i];
        }
        scanf("%lld %lld %lld",&c,&d,&e);
        scanf("%lld %lld %lld",&x,&y,&z);
        for(i=(c+1);i<x;i++)
        {
            if(i%4!=0)
                sum1=sum1+sum;
            else
                sum1=sum1+sum+1;
        }
        if(c%4==0 || x%4==0)
            sum1++;
            if(c!=x)
            {
        for(i=0;i<(y-1);i++)
            sum1=sum1+a[i];
        sum1=sum1+z;
        for(i=(d);i<n;i++)
            sum1=sum1+a[i];
        sum1=sum1+(a[d-1]-e+1);
            }
            else
                {for(i=(d);i<(y-1);i++)
            {
               sum1=sum1+a[i];
            }
            sum1=sum1+z+(a[d-1]-e+1);
                }
                printf("%lld\n",sum1);
    }

}

