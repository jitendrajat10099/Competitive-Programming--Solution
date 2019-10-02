#include <stdio.h>
int main()
{
    long long int t,n,k;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld %lld",&n,&k);
        if(k!=0)
        {
        printf("%lld %lld\n",(n/k),(n%k));
        }
        else if(k==0)
            printf("%lld %lld\n",0,n);
    }
}

