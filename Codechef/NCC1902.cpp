#include<stdio.h>
long long int bh(long long int l)
{
    long long int sum,rem;

        while(l>=10)
        {sum=0;
        while(l!=0)
        {
            rem=l;
            sum=sum+rem;
            l=l/10;
        }
         l=sum;
        }
        return l;

}
int main()
{
    long long int t,l,r,n1,n2,sum1,rem,sum,c,c1,x,y,i;
    scanf("%lld",&t);
    while(t--)
    {
        c=0;c1=0;
        sum=0;sum1=0;
        scanf("%lld %lld %lld %lld",&l,&r,&n1,&n2);

        x=(r-l+1)/9;
        y=9*x+l-1;
      for(i=y+1;i<=r;i++)
    {if(bh(i)==n1)
    c++;
 if(bh(i)==n2)
    c1++;}
                if(c==c1)
                    printf("Draw\n");
                else if(c1>c)
                    printf("Krushna\n");
                else
                    printf("Onkar\n");



    }
}

