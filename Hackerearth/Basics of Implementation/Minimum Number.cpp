// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/invert-it-b06fd53a/ 

#include<bits/stdc++.h>
using namespace std;


int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);

    
    int t,n,k,q,i,a[100000];
    cin>>t;
    while(t--)
    {
        cin>>n>>k>>q;
        for(i=0;i<n;i++)
            cin>>a[i];
            
        sort(a,a+n);
        if(k>1 && a[0]<q)
        cout<<a[0]<<endl;
        else if(a[n-1]<q)
        cout<<a[n-1]<<endl;
        else
        cout<<"NO"<<endl;
        
    }   
}
