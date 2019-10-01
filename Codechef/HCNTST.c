#include<stdio.h>
int main()
{
    long long int t,a,b,sum;
    scanf("%lld",&t);
    while(t--)
    {
        sum=0;
        scanf("%lld %lld",&a,&b);
        sum=(20*(2*b-1)+10*(2*b))/2;
        printf("%lld\n",sum);

    }

}

