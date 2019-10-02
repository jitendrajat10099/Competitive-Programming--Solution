#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,t,x;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld %lld",&a,&b);
        x=__gcd(a,b);
        a=a/x;
        b=b/x;
        printf("%lld\n",(x*(a+b-1)));
    }
}

