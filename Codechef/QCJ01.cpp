#include<stdio.h>
#include<stdlib.h>
int main()
{
    int t,a,b,a1,b1,k,x,y;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d %d %d",&a,&b,&a1,&b1);
         k=abs(a-a1);
        if(abs(b-b1)==1 && k!=0 && (a1>a))
        {
            if(k%2==0 && k!=0)
                printf("Black\n");
            else
                printf("White\n");
        }
        else if(abs(b-b1)>=1 || k==0 || a1<=a)
        {
          x=8-a;
          y=a1-1;
          if(x<=y)
                printf("Black\n");
          else
            printf("White\n");
        }
        else if((b-b1)==0 && a1>a)
        {
            if((a-a1)%2==0)
                printf("White\n");
            else
                printf("Black\n");
        }
    }
}

