/*
https://codeforces.com/contest/1225/problem/C
*/

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
     
    ll n,i,ans=0,m,p;
   
    cin>>n>>p;

    for(ll k=1;k<32 ;k++)
    {
        ll x=n-k*p;
        // cout<<"x is "<<x<<endl;
        if(x<=0 || x <k)
        {
            cout<<-1;
            return 0;
        }
        //28(11100)can divided as 16+4+4+4
        if(__builtin_popcount(x)<=k)
        {
            cout<<k;
            return 0;
        }

    }
    cout<<-1;

}
