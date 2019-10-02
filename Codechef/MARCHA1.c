#include<stdio.h>
#include<stdlib.h>
int main()
{
    int t,i,n,am,a,sum,count,j;
    scanf("%d",&t);
    while(t--)
    {
        a=0;sum=0;
        scanf("%d %d",&n,&am);
        int arr[n];
        for(i=0;i<n;i++)
            scanf("%d",&arr[i]);
        count=1<<n;
        for(i=0;i<count;i++)
        {sum=0;
           for(j=0;j<n;j++)
           {
               if(i&(1<<j))
                sum=sum+arr[j];
           }
           if(sum==am)
           {
               a=1;break;
           }
        }
        if(a==1)
            printf("Yes\n");
        else
            printf("No\n");
    }
}

