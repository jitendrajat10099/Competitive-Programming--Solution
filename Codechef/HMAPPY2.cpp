#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,n,a,b,k,x,y,z,ans;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld %lld %lld %lld",&n,&a,&b,&k);
        x=n/a;
        y=n/b;
        z=n/((a*b)/__gcd(a,b));
        ans=x+y-2*z;
        if(ans>=k)
            printf("Win\n");
        else
            printf("Lose\n");


    }
}

