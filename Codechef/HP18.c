#include<stdio.h>
int main()
{
    long long int t,i,n,a,b,c,d,e;
    long long int s[200000];
    scanf("%lld",&t);
    while(t--)
    {
        c=0;d=0;e=0;
        scanf("%lld %lld %lld",&n,&a,&b);
        for(i=0;i<n;i++)
            {scanf("%lld",&s[i]);
                  if(s[i]%a==0)
                  c++;
                  if(s[i]%b==0)
                    d++;
                    if(s[i]%a==0 && s[i]%b==0)
                        e++;
            }
            if(e>=1)
            {
                d=d-e;
            }
            if(d>=c)
                printf("ALICE\n");
            else
                printf("BOB\n");
    }
}

