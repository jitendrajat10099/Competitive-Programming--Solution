#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define pie 3.14
typedef long long int ll;

		/*
		_____
		|   |   | /
        |___|   |/
		|   |   |\
		|   | . | \ .
		*/
///////////////////////////////////////
int main()
{
ios_base::sync_with_stdio(false); 
cin.tie(NULL);

ll t,i,ma=0;
ll a[100005];
cin>>t;
for(i=0;i<t;i++)
{
	cin>>a[i];
	if(a[i]>ma)
		ma=a[i];
}
for(i=0;i<t;i++)
{
	if(a[i]==ma)
		a[i]=0;
}
ma=0;
for(i=0;i<t;i++)
{
if(a[i]>ma)
	ma=a[i];
}
cout<<ma;

}
