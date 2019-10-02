#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,ma;
    int a[10005];
    int b[10005];
    int c[10005];
    scanf("%d",&t);
    while(t--)
    {
        ma=-1;
        scanf("%d",&n);
        for(i=0;i<n;i++)
            scanf("%d",&a[i]);
        for(i=0;i<n;i++)
            scanf("%d",&b[i]);
        for(i=1;i<(n-1);i++)
            c[i]=b[i]-a[i+1]-a[i-1];
        c[0]=b[0]-a[1]-a[n-1];
        c[n-1]=b[n-1]-a[0]-a[n-2];
        for(i=0;i<n;i++)
for(i=0;i<n;i++)
{
 if(c[i]>0)
 {
   if(b[i]>=ma)
        ma=b[i];
 }
}
printf("%d\n",ma);
    }
}

