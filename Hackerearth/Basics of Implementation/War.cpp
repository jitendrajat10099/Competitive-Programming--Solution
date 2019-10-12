/*
https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/warcakewalk/
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
    
    
    int t,i,a[100000],b[100000],n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0;i<n;i++)
        cin>>b[i];
        for(i=0;i<n;i++)
        cin>>a[i];
        sort(a,a+n);
        sort(b,b+n);
        if(a[n-1]>b[n-1])
        cout<<"Alice"<<endl;
        else if(a[n-1]<b[n-1])
        cout<<"Bob"<<endl;
        else
        cout<<"Tie"<<endl;
    }

}
