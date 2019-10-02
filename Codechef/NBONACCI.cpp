#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,k,i,q,r;
    long long int a[100005];
    long long int b[100005];
    scanf("%lld %lld",&n,&k);
    for(i=0;i<(n);i++)
        scanf("%lld",&a[i]);
        b[0]=a[0];
        a[n]=0;
    for(i=1;i<(n);i++)
    {
        b[i]=b[i-1]^a[i];
    }
    b[n]=0;
    //for(i=0;i<(n+1);i++)
      // printf("%d\n",b[i]);
    while(k--)
    {
        scanf("%lld",&q);
        r=q%(n+1);
        if(r==0)
            r+=n+1;
        printf("%lld\n",b[r-1]);
    }
}

