#include<stdio.h>
int main()
{
long long int t,a,b;
scanf("%lld",&t);
while(t--)
{
    scanf("%lld %lld",&a,&b);
    if(a<b || b==0)
        printf("cannot distribute\n");
    else
        printf("%lld\n",(a/b));
}
}

