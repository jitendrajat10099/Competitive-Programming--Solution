#include<stdio.h>
#include<string.h>
int main()
{
    long long int t,n,p,i,j,k,c=0,max=-1,mod,form;
    scanf("%lld",&t);
    while(t--)
    {
        c=0;max=-1;
        scanf("%lld %lld",&n,&p);
        if(n==1 || n==2)
            printf("%lld\n",(p*p*p));
        else
        {
            if(n%2==1)
            {
                n--;
                p--;
            }
            form=((n+2)*(n+2))/4+((n+4)*3*(p-n))/2+(6*(p-n)*(p-n-1))/2;
            printf("%lld\n",form);
        }
    }
}

