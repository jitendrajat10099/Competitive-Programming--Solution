/*
Problem Link: https://www.codechef.com/COOK105B/problems/CFMM/
*/

﻿﻿#include<iostream>
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
string st[n];
ll arr[26];
for(ll i=0;i<26;i++)arr[i]=0;
for(ll i=0;i<n;i++)cin>>st[i];
for(ll i=0;i<n;i++)
for(ll j=0;j<st[i].length();j++)arr[(int)st[i][j]-97]++;
ll c=0;  while(arr[2]>=2&&arr[4]>=2&&arr[14]>=1&&arr[7]>=1&&arr[5]>=1&&arr[3]>=1)
  {
  arr[2]=arr[2]-2;
  arr[4]=arr[4]-2;
  arr[14]=arr[14]-1;
  arr[7]=arr[7]-1;
  arr[5]=arr[5]-1;
  arr[3]=arr[3]-1;
  c++;
  }
  cout<<c<<"\n";
}
return 0;
}
