#include<stdio.h>
int main()
{
    int t,n,a,b,c;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        while(n--)
        {
          scanf("%d %d %d",&a,&b,&c);
          if(a==c || b%2==0)
                printf("%d\n",(b/2));
        else if(a!=c && b%2==1)
            printf("%d\n",(b/2+1));
        }
    }
}

