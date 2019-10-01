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
while(t--)
{
	ll i,j;
	ll s1[4],s2[4],s3[4];
	ll s[4][4];
	for(i=0;i<3;i++)
		cin>>s1[i];
	for(i=0;i<3;i++)
		cin>>s2[i];
	for(i=0;i<3;i++)
		cin>>s3[i];
	ll c=0,d=0,k=0;
		for(j=0;j<3;j++)
		{
         if(s1[j]>s2[j])
         	c=1;
		}
	//s2>s1 if c=0
		for(j=0;j<3;j++)
		{
			if(s2[j]>s3[j])
				d=1;
		}
		//cout<<c<<d<<endl;
		if(c==0 && d==0)
			k=1;
		//s3>s2>s1
		c=0;d=0;
		for(j=0;j<3;j++)
		{
         if(s2[j]>s1[j])
         	c=1;
		}

		for(j=0;j<3;j++)
		{
			if(s1[j]>s3[j])
				d=1;
		}
		//cout<<c<<d<<endl;
		if(c==0 && d==0)
			k=1;
		//s3>s1>s2
		c=0;d=0;
		for(j=0;j<3;j++)
		{
         if(s1[j]>s2[j])
         	c=1;
		}

		for(j=0;j<3;j++)
		{
			if(s3[j]>s1[j])
				d=1;
		}
		//cout<<c<<d<<endl;
		//s2>s1>s3
			if(c==0 && d==0)
			k=1;
		c=0;d=0;
		for(j=0;j<3;j++)
		{
         if(s1[j]>s3[j])
         	c=1;
		}

		for(j=0;j<3;j++)
		{
			if(s3[j]>s2[j])
				d=1;
		}
		//cout<<c<<d<<endl;
		//s2>s3>s1
			if(c==0 && d==0)
			k=1;
		c=0;d=0;
		for(j=0;j<3;j++)
		{
         if(s2[j]>s1[j])
         	c=1;
		}

		for(j=0;j<3;j++)
		{
			if(s3[j]>s2[j])
				d=1;
		}
		//cout<<c<<d<<endl;
			if(c==0 && d==0)
			k=1;
		//s1>s2>s3
		c=0;d=0;
		for(j=0;j<3;j++)
		{
         if(s3[j]>s1[j])
         	c=1;
		}

		for(j=0;j<3;j++)
		{
			if(s2[j]>s3[j])
				d=1;
		}
		//cout<<c<<d<<endl;
		if(c==0 && d==0)
			k=1;
		//s1>s3>s2
		//I condition might arise when 2 arrays are exactly equal than also it is not possible to arange so checkit
for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
	{
		if(i==0)
			s[0][j]=s1[j];
		if(i==1)
			s[1][j]=s2[j];
		if(i==2)
			s[2][j]=s3[j];
	}
}
//cout<<k<<endl;
//cout<<endl;
//cout<<s[0][0]<<s[1][0]<<endl;
ll co=0,l;
for(i=0;i<3;i++)
{
	for(j=i+1;j<3;j++)
	{
		co=0;
      for(l=0;l<3;l++)
      {
      	//cout<<i<<j<<k<<endl;
      	if(s[i][l]==s[j][l])
      		co++;
      	//cout<<s[i][k]<<" "<<s[j][k]<<" "<<c<<endl;
      }
     // cout<<co;
      if(co==3)
      {
      	k=0;
      	break;
      }
	}
	if(k==0)
		break;
}
//cout<<k<<endl;
			if(k==1)
				cout<<"yes\n";
			else
				cout<<"no\n";
}
}
