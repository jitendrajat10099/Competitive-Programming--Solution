/*
practice link - https://practice.geeksforgeeks.org/problems/nth-catalan-number/0
/*
#include<bits/stdc++.h>
#include <boost/multiprecision/cpp_int.hpp> 
using boost::multiprecision::cpp_int;
using namespace std;
#define maxx 101
cpp_int c[maxx]={};
cpp_int catalan(int n)
{
    if(c[n]!=0)
    return c[n];
    
    cpp_int ans=0;
    for(int i=0;i<n;i++)
        ans += catalan(i)*catalan(n-i-1);
    c[n]=ans;
    return ans;
}
int main()
{
    c[0]=c[1]=1;
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cout<<catalan(n)<<endl;
    }
}
