/*
Problem Link: https://www.hackerrank.com/challenges/sock-merchant/

*/

#include <bits/stdc++.h>
using namespace std;
int main()
{

int n,a[101]={0},i,k,sum=0;
cin >> n;

for(i=0;i<n;i++)
{
    cin>>k;
    a[k]++;
}

for(i=0;i<=100;i++)
{
sum+=a[i]/2;
}
cout<<sum<<endl;
}
