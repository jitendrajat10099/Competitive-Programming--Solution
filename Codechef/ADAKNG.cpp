#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,r,c,k,ans,x=8;
    cin>>t;
    while(t--)
    {
        cin>>r>>c>>k;
        r=r-1;
        c=c-1;
        if(r>3)
            r=7-r;
        if(c>3)
            c=7-c;
        ans=min(x,(k+1+min(r,k)))*min(x,(k+1+min(c,k)));
        if(ans>64)
            ans=64;
        cout<<ans<<endl;
    }
        return 0;
}

