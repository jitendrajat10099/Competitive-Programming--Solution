#include<stdio.h>
int main()
{
   int t,i,j,p,n,k,r,c;
    scanf("%d",&t);
while(t--)
{
    scanf("%d %d",&n,&k);
    long long int a[n]={0};
    long long int b[n]={0};
    p=n-k;
    for(i=0;i<k;i++)
    {
        scanf("%d %d",&r,&c);
        a[r-1]=1;
        b[c-1]=1;
    }
    printf("%d ",p);
for(i=0;i<n;i++)
{
    for(j=0;j<n;j++)
    {
        if(a[i]==0 && b[j]==0)
            {printf("%d %d ",i+1,j+1);
        a[i]++;b[j]++;}
    }
}
    printf("\n");
}
}

