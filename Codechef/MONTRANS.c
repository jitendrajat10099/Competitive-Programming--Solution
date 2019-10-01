#include<stdio.h>
int main()
{
    int t,a,b,c,ma,sum,counter,temp,index;
    scanf("%d",&t);
    while(t--)
    {
        counter=0,sum=0,index=0;
        scanf("%d %d %d",&a,&b,&c);
        ma=a*100+b;
        while(counter<=10000)
        {
            if(b>=c)
            {
                b=b-c;
                temp=a;
                a=b;
                b=temp;
                sum=a*100+b;
                counter++;
                if(sum>ma)
                   {ma=sum;index=counter;}
                if((sum-c)<=0 || counter>=10000)
                break;
            }

         if(b<c)
            {
                a--;
                b=b+100;
            }
        }
        printf("%d\n",index);
    }
}

