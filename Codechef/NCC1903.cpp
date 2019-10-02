#include<stdio.h>
int main()
{
    long long int t,n,k,l,c,i;
    scanf("%lld",&t);
    while(t--)
    {
        c=0;
        scanf("%lld",&n);
        scanf("%lld",&k);
        for(i=0;i<k;i++)
        {scanf("%lld",&l);
        if((n-l)>=0)
            {
                c++;
                n=n-l;
            }
        }
        printf("%lld\n",c);
    }
}

