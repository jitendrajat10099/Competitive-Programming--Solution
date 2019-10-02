#include<stdio.h>
int main()
{
    int n,x,s,a,b,t;
    scanf("%d",&t);
    while(t--)
    {
   scanf("%d%d%d",&n,&x,&s);
    while(s--)
    {
        scanf("%d%d", &a,&b);
       if(a==x)
        x=b;

   else if(x==b)
    x=a;

    }
    printf("%d\n",x);
    }
    
    return 0;
}
