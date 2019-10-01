#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,n,p,q,sum=0,i,l,r,x,b=0;
    scanf("%lld",&t);
    while(t--)
    {
    long long int a[100002]={0};
    long long int c[100002]={0};
        sum=0;b=0;
        scanf("%lld %lld %lld",&n,&p,&q);
        for(i=0;i<n;i++)
            {scanf("%lld",&a[i]);
            b=b+a[i];
            }
            for(i=0;i<q;i++)
            {
                scanf("%lld %lld %lld",&l,&r,&x);
                c[i]=(r-l+1)*x;
            }
           // for(i=0;i<q;i++)
            //printf("%lld\n",c[i]);
            sort(c,c+q);
            for(i=q-1;i>=(q-p);i--)
                sum+=c[i];
            printf("%lld\n",(sum+b));

    }
}

