#include<stdio.h>
int main()
{
    long int t,n,x,i;
    scanf("%ld",&t);
    for(i=0;i<t;i++)
    {
        scanf("%ld",&n);
        x=n%6;
        if(x!=0 && x!=1)
            printf("A\n");
        else
            printf("B\n");
    }

}

