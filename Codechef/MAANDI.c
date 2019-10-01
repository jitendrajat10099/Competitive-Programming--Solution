#include<stdio.h>
int main()
{
    long long int t,c,n,i,rem,k,a,d;
    scanf("%lld",&t);
    while(t--)
    {
        c=0;d=0;
        scanf("%lld",&n);
        for(i=1;(i*i)<=n;i++)
        {c=0;
            if(n%i==0)
            {
            k=i;
                while(k!=0)
                {
                    rem=k;
                    k=k/10;
                    if(rem==4||rem==7)
                    {
                        c++;break;
                    }
                }
                a=n/i;
                if(a!=i)
                {
                while(a!=0)
                {
                    rem=a;
                    a=a/10;
                    if(rem==4||rem==7)
                    {
                        c++;break;
                    }

                }
            }
            }
if(c>=1)
d=d+c;
        }
        printf("%lld\n",d);
    }
}

