#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	long long int p,i,a,b,ans=0,j;
	scanf("%d",&t);
	bool isprime[50000];
	memset(isprime, true, sizeof(isprime));
    for (p = 2; p * p < 50000; p++)
        {if (isprime[p] == true)
            for (i = p * p; i < 50000; i += p)
                isprime[i] = false;}

    isprime[0]=0;
    isprime[1] =0;
	while(t--)
	{
	    ans=0;
	    long long int div[1000005]={0};
	    scanf("%lld %lld",&a,&b);
        for (i = 1; i*i<= b; i++)
        {
            for (j = (((a-1)/i )+1)*i; j <= b; j += i)
            {
                if(j< (i*i))
                continue;

                if(j!=(i*i))
                div[j-a] += 2;

                else
                div[j-a] += 1;
            }
        }
	    for(i=a;i<=b;i++)
	    {
	        if(isprime[div[i-a]]==true)
	        {
	            ans++;
	        }
	    }
	    printf("%lld\n",ans);
    }
}

