#include<stdio.h>
#include<math.h>
int main()
{
    long long int t,a,b,c,d,i,a1,b1,rem,e;
    scanf("%lld",&t);
    while(t--)
    {
        e=0;
    scanf("%lld %lld",&a,&b);
        a1=sqrt(a);
        if(a!=(a1*a1))
            a1++;
        b1=sqrt(b);
        for(i=a1;i<=b1;i++)
        {d=1;
            c=i*i;
            while(c!=0)
            {
                rem=c;
            if(rem!=0 && rem!=1 && rem!=4 && rem!=9)
            {
                d=0;break;
            }
            c=c/10;
            }
            if(d==1)
                {e++;}
        }
      printf("%lld\n",e);
      }
    }


