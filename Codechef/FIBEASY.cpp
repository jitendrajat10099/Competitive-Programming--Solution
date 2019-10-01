/*
link - https://www.codechef.com/SEPT19B/problems/FIBEASY
*/
#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;
 ll f[60] = {}; 
void fib( ll n) 
{ 
    f[0] = 0; 
    f[1] = 1; 

    for (ll i = 2; i <= n; i++) 
        f[i] = (f[i - 1] + f[i - 2]) % 10; 
} 
ll largest_power(long N)
{
    N = N|(N>>1);
    N = N|(N>>2);
    N = N|(N>>4);
    N = N|(N>>8);
    N = N|(N>>16);
    N = N|(N>>32);
    return (N+1)>>1;
}

int main()
{
	ll t,n;
	 fib(60); 
	cin>>t;
	while(t--)
	{
		cin>>n;
 		n=largest_power(n);
		
		ll ans = f[(n-1)%60];
		cout<<ans<<endl;
	}
}
