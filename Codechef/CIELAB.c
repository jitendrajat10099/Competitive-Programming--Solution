#include <stdio.h>
int main()
{
    int a,b,c,rem;
    scanf("%d %d",&a,&b);
    c=a-b;
    rem=c;
    if(rem!=9)
    {
    c=c/10;
    rem=rem+1;
    }
    else
    {
        c=c/10;
        rem=rem-1;
    }
    c=c*10+rem;
    printf("%d",c);

}

