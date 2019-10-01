#include <stdio.h>
int main()
{
    int t,n,f,in,c,c1,c2,i;
    scanf("%d",&t);
    while(t--)
    {
        c=0;
        c1=0;c2=0;
        scanf("%d %d",&n,&f);
        int arr[n];
        int ca[n/2];
        int ca1[n/2];
        for(i=0;i<n;i++)
            arr[i]=0;
        for(i=0;i<f;i++)
        {
            scanf("%d",&in);
            arr[in-1]=1;
        }
        for(i=0;i<n;i++)
        {
            if(arr[i]==0 && c%2==0)
            {
             ca[c1]=i+1;
             c1++;
             c++;
            }
            else if(arr[i]==0 && c%2==1)
            {
                ca1[c2]=i+1;
                c2++;
                c++;
            }
        }
        for(i=0;i<c1;i++)
            printf("%d ",ca[i]);
        printf("\n");
        for(i=0;i<c2;i++)
            printf("%d ",ca1[i]);
            printf("\n");



    }
}

