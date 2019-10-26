/*
https://practice.geeksforgeeks.org/problems/ugly-numbers/0
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define MAX 10001
ll ugly[MAX];
void getNthUglyNo()
{
    ugly[1]=1;
    ll i2=1,i3=1,i5=1;
    for(ll index=2;index<MAX;index++)
    {
           ugly[index]=min({ugly[i2]*2,ugly[i3]*3,ugly[i5]*5});
           if(ugly[index]==2*ugly[i2])  i2++;
           if(ugly[index]==3*ugly[i3])  i3++;
           if(ugly[index]==5*ugly[i5])  i5++;
    }
}
int main()
{
    getNthUglyNo();
    ll t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cout<<ugly[n]<<endl;
    }
}

