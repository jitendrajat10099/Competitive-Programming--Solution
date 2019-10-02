#include<stdio.h>
#include<math.h>
int main()
{
    int t,test;
    long long int n,a,b,c;
    scanf("%d",&test);
    while(test--)
    {
        a=0;
        b=0;
        c=0;
        scanf("%lld",&n);
        for(t=0;t<10000;t++)
        {
          if(n>0+26*t && n<=2+26*t)
                {a=pow(2,(t));
                break;}
          if(n>2+26*t && n<=10+26*t)
                {b=pow(2,(t));break;}
          if(n>10+26*t && n<=26+26*t)
                {c=pow(2,(t));break;}
                if(n==0)
                 a=1;
        }
        printf("%lld %lld %lld",a,b,c);
        printf("\n");
    }
}

