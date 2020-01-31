/*
https://www.hackerearth.com/practice/math/number-theory/totient-function/tutorial/
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    int ans=n;
    for(i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            while(n%i==0)
            n=n/i;
            ans  *= (1-1.0/i); 
        }
    }
    if(n>1)//n is now prime
    ans *=(1-1.0/n);
    cout<<ans;
    
}
