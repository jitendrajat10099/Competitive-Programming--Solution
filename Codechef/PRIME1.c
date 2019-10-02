#include <stdio.h>
int prime(int n)
{
    int i,c=0;
    if(n%2==1)
    {
    for(i=1;i*i<=n;i++)
    {
        if(n%i==0)
           {
               c++;
               if(c>1)
                break;
               }
    }
    }
    if((c==1 || n==2)&&(n!=1))
        return 1;
    else
        return 0;
}
int main()
{
    int t,a,b,i;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&a,&b);
        for(i=a;i<=b;i++)
        {
           if(prime(i)==1)
                printf("%d\n",i);
        }
        printf("\n");
    }
}

