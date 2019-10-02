#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,k,q,pos,ma=-1,i;
    int b[100005];
    scanf("%d",&t);
    while(t--)
    {
        ma=-100005;
        int arr[100005]={0};
          int c[100005];
          for(i=0;i<100000;i++)
            c[i]=-100005;
        scanf("%d %d",&n,&k);
        for(i=0;i<n;i++)
        {
            scanf("%d",&b[i]);
        }
        for(i=(n-1);i>=0;i--)
        {
            pos=i+1;
            arr[pos%k]=arr[pos%k]+b[i];
            {
                if(arr[pos%k]>=c[pos%k])
                {
                    c[pos%k]=arr[pos%k];
                }
            }
        }
        for(i=0;i<=k-1;i++)
        {
            if(c[i]>ma)
                ma=c[i];
        }
        printf("%d\n",ma);
    }
}

