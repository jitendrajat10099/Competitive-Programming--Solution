#include<stdio.h>
int main()
{
    int t,i,j,n,c,i1;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        for(i=1;i<=n;i++)
        {
            c=i*(i+1)/2;
            i1=i;
            for(j=1;j<=(n-i+1);j++)
            {

               printf("%d ",c);
               c=c+i1;
               i1++;
            }
            c--;
            i1=i1-2;
            for(j=(n-i+2);j<=n;j++)
            {
                printf("%d ",c);
                i1=i1-1;
                c=c+i1;

            }
            printf("\n");

        }
        printf("\n");
    }
}

