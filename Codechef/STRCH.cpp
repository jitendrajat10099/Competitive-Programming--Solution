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
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);
ll t,c=0,ans,i,n;
cin>>t;

while(t--)
{
	c=0;ans=0;
char s[1000005];
char ch;
cin>>n;
//cout<<n;
cin>>s;
//cout<<s;
cin>>ch;
ans=n*(n+1)/2;
for(i=0;i<n;i++)
{
	if(s[i]!=ch)
		c++;
	else
	{
		ans=ans-(c)*(c+1)/2;
		c=0;
	}
}
ans=ans-(c)*(c+1)/2;
cout<<ans<<endl;
}
}
