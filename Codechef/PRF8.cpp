
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll n,i,ans=0;
	#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif
scanf("%lld",&n);
for(i=2;i*i<=(n);i++)
{
	//printf("%lld\n",ans);
	if(n%i==0)
	{
	if(i!=((double)n/i))
		ans=ans+i+n/i;
	else
		ans=ans+i;
}
}
if(n!=1)
ans=ans+1;
//printf("%lld\n",ans);
if(ans==n)
printf("Perfect\n");
else
printf("Not Perfect\n");
}


