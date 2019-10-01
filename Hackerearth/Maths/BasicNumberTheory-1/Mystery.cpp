/*
Problem - https://www.hackerearth.com/practice/math/number-theory/basic-number-theory-1/practice-problems/algorithm/mystery-20/

*/
#include <iostream>
using namespace std;
 
int main()
{
    int n,t,i,ans;
    cin>>t;
    while(t--)
    {  cin>>n;
       ans=0;
    for(i=1;i*i<n;i++)
    {
        if(n%i==0)
        ans += 2;
    }
    if(i*i==n)
    ans++;
    cout<<ans<<endl;
    }
}
