#include<stdio.h>
int main()
{
    int t,y;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&y);
        if(y==2010 || y==2015 || y==2017 || y==2016 || y==2019)
            printf("HOSTED\n");
            else
            printf("NOT HOSTED\n");
    }
}

