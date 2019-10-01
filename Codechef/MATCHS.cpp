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
ll a,b;
while(t--)
{
	ll c=0;
	cin>>a>>b;
	if(max(a,b)/min(a,b)<2)
	{
	while(a!=0 && b!=0)
	{
		if(a<=b)
		{
			b=b%a;
		}
		else
			a=a%b;
		c++;
		//cout<<a<<" "<<b<<endl;
		if(min(a,b)!=0)
		{
		if(((double)max(a,b)/min(a,b))>=2)
			{c++;
				break;}
			}
	}
	//cout<<c<<endl;
	if(c%2==1)
		cout<<"Ari"<<endl;
	else
		cout<<"Rich"<<endl;
}
else
cout<<"Ari"<<endl;
}
}
