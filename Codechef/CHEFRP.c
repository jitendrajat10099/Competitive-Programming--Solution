#include <stdio.h>
int main()
{
    int t,mi,n,i,sum;
    scanf("%d",&t);
    int a[100000];
    while(t--)
    {
        mi=100000;
        sum=0;
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            sum=sum+a[i];
            if(a[i]<mi)
                mi=a[i];
        }
        if(mi<2)
            printf("%d\n",-1);
            else
            printf("%d\n",(sum-mi+2));

    }
}

