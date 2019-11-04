/*
Problem Link: https://www.codechef.com/COOK105B/problems/HUNGALGO
*/

﻿#include<iostream>
#include <algorithm>
using namespace std;
#define ll long long int
int main()
{
ll t,n;
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cin>>t;
while(t--)
{
cin>>n;
ll r[n],c[n],mat[n][n],rmin[n],cmin[n];
for(int i=0;i<n;i++)
	{
		r[i]=0;
		c[i]=0;
		rmin[i]=655536;
		cmin[i]=655536;
	}
for(int i=0;i<n;i++)
for(int j=0;j<n;j++)
	{
		ll z;
		cin>>z;
		mat[i][j]=z;
		if(z<rmin[i])rmin[i]=z;
		if(z<cmin[j])cmin[j]=z;
		if(z==0)
		{
			r[i]++;
			c[j]++;
		}
	}
bool f=true,g=true;
ll a=0,b=0;
for(int i=0;i<n;i++)
	{
		if(r[i]==0||c[i]==0)
		{
			f=false;
			break;
		}
		a=a+r[i];
		b=b+r[i];
	}
if(a<n||b<n||a!=b)f=false;
if(f)cout<<"YES"<<"\n";
else cout<<"NO"<<"\n";
}
return 0;
}
