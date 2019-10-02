#include<stdio.h>
int main()
{
    int t=0,n;
    while(t==0)
    {
      scanf("%d",&n);
      if(n!=42)
            printf("%d\n",n);
      if(n==42)
      {
          t==1;
          break;
      }
    }
}

