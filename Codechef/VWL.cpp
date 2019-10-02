#include<stdio.h>
int main()
{
    long long int t,i,c=0;
    long long int a[6]={0};
    char ch;
    scanf("%lld",&t);
    fflush(stdin);
    for(i=0;i<t;i++)
    {
        scanf("%c",&ch);
        if(ch=='a')
            a[0]++;
        else if(ch=='e')
            a[1]++;
        else if(ch=='i')
            a[2]++;
        else if(ch=='o')
            a[3]++;
        else if(ch=='u')
            a[4]++;

    }
    for(i=0;i<5;i++)
    {
        if(a[i]>=1)
            c++;
    }
    if(c>=4)
        printf("Yes\n");
    else
        printf("No\n");
}

