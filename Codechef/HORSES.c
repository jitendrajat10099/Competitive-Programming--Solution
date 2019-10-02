#include <stdio.h>
#include <stdlib.h>
int main()
{
    long long int t,n,i,mi,j,diff;
    scanf("%lld",&t);
    while(t--)
    {
        mi=1000000000;
        scanf("%lld",&n);
        int arr[n];
        for(i=0;i<n;i++)
            scanf("%lld",&arr[i]);
        for(i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++)
            {
              diff=abs(arr[j]-arr[i]);
              if(mi>diff)
                mi=diff;
            }
        }
        printf("%lld\n",mi);
    }
}

