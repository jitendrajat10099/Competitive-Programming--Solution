#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,k,sum,sum1,i;
    scanf("%d",&t);
    while(t--)
    {sum=0;
    sum1=0;
        scanf("%d %d",&n,&k);
        int arr[n];
        for(i=0;i<n;i++)
            scanf("%d",&arr[i]);
            sort(arr,arr+n);
                if((n-k)>=k)
        {
            for(i=(n-1);i>=k;i--)
                sum=sum+arr[i];
            for(i=k-1;i>=0;i--)
                sum1=sum1+arr[i];
        }
        else if((n-k)<k)
            {
            for(i=n-1;i>=(n-k);i--)
            sum=sum+arr[i];
        for(i=n-k-1;i>=0;i--)
            sum1=sum1+arr[i];

    }
    printf("%d\n",(sum-sum1));
}
}

