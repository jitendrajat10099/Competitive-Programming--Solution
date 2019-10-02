#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n,k;
		cin >> n >> k;
		int a[n+1];
		a[0]=0;
		int count=0;
		for(int i=1;i<=n;i++)
		{
			cin >> a[i];
			
				if(a[i]-a[i-1]>k)
				{
					count=count+(((a[i]-a[i-1])%k)==0?((a[i]-a[i-1])/k)-1:((a[i]-a[i-1])/k));
				}
			
		}
		cout << count << endl;
	}
}
		