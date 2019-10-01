#include <stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    long long int t,i,j,n,k,sum,su,c=0,mi;
    scanf("%lld",&t);
    while(t--)
    {
        c=0;
        scanf("%lld %lld",&n,&k);
        long long int a[n];
        for(i=0;i<n;i++)
            scanf("%lld",&a[i]);
            mi=abs(a[0]+a[1]-k);
            if(n>2 && n<=1000)
            {
        for(i=0;i<n;i++)
        {
            for(j=(i+1);j<n;j++)
            {
                sum=a[i]+a[j];
                su=abs(k-sum);
                if(su<mi)
                {c=0;
                    mi=su;
                }
                if(su==mi)
                    {c++;}
            }
        }
        printf("%lld %lld",mi,c);
        printf("\n");
    }
    if(n==2)
    {
        printf("%lld %lld\n",mi,1);
    }
    }
    }



