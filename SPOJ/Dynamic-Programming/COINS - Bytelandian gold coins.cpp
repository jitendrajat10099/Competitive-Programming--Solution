/*
problem -  https://www.spoj.com/problems/COINS/
*/

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define maxx 1000001
ll memoization[maxx]={};
ll coin(ll n)
{
    if(n<maxx && memoization[n]!=0)
    return memoization[n];
    if(n<4)
    return n;

    ll ans = max(n,coin(n/2)+coin(n/3)+coin(n/4));
    if(n<maxx)
    memoization[n]=ans;
    return ans;
}

int main()
{

    ll n;
    while(cin>>n)
    {
        cout<<coin(n)<<endl;
    }
}
