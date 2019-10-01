#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define pie 3.14
typedef long long int ll;
/*
 .d8b.  d8888b. db    db  .d8b.  d8b   db 
d8' `8b 88  `8D `8b  d8' d8' `8b 888o  88 
88ooo88 88oobY'  `8bd8'  88ooo88 88V8o 88 
88~~~88 88`8b      88    88~~~88 88 V8o88 
88   88 88 `88.    88    88   88 88  V888 
YP   YP 88   YD    YP    YP   YP VP   V8P 
                                          
                                          
*/


///////////////////////////////////////
int main()
{
ios_base::sync_with_stdio(false); 
cin.tie(NULL);
#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif
ll t;
cin>>t;
ll arr[1000005];
while(t--)
{
ll n,z,i,j;
cin>>n>>z;
for(i=0;i<n;i++)
	cin>>arr[i];
for(i=0;i<z;i++)
{
	for(j=0;j<n-1;)
	{
		if(arr[j]==0 && arr[j+1]==1)
		{
          arr[j]=1;
          arr[j+1]=0;
          j=j+2;
		}
		else
			j++;
	}
}
for(i=0;i<n;i++)
cout<<arr[i]<<" ";
cout<<"\n";
}
}
