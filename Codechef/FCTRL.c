#include<stdio.h>
int main()
{
long int t,c,n,i;
scanf("%ld",&t);
while(t--)
{
    c=0;
    scanf("%ld",&n);
        for(i=5;i<=n;i=i*5)
            c=c+(n/i);
        printf("%ld\n",c);
}
}

