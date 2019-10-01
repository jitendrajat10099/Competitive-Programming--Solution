#include<stdio.h>
int main()
{
    int t,n,k,c,i;
    int a[100000];
    scanf("%d",&t);
    while(t--)
    {
        c=0;
        scanf("%d%d",&n,&k);
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            if(a[i]!=1)
                c++;
        }
        if(k>=c)
            printf("YES\n");
        else
            printf("NO\n");
    }
}


