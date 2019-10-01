#include<stdio.h>
long long int power1(long long int x,long long int y,long long int p,long long int a)
{
	long long int res=a;
	x = x%p;
	while (y>0)
	{
		if (y&1)
			res=((res%p)*(x%p))%p;
		y=y>>1;
		x=((x%p)*(x%p))%p;
	}
	return (res%p);
}
int main()
{
    long long int t,n,r=1000000007,ans,a;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld",&n);
        a=n%r*(n+1)%r;
        a=a%r;
        ans=power1(2,r-2,r,a);
        printf("%lld\n",ans%r);
    }
}

