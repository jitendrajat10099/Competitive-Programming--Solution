/*
https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/diwali-celebration/
*/

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t,a,k,n;
    cin>>t;
    while(t--)
    {
        cin>>a>>k>>n;
        cout<<a+(n-1)*k<<endl;
    }
    
}
