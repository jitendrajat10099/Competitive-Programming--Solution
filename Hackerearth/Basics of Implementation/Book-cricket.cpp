/*
https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/bookcricket-bd707e2d/editorial/

*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t,n,p;
    
    string s;
    cin>>t;
    for(int j=1;j<=t;j++)
    {
        int a[11];
        memset(a,-1,sizeof(a));
        
        cin>>n>>p;
        int str=1;
        int nonstr=2;
        a[str]=a[nonstr]=0;
        string s;
        
        cin>>s;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='W')
            { str=max(str,nonstr)+1;
                a[str]=0;
            }
            else
            {
                a[str]+=s[i]-'0';
            }
            if(s[i]=='1')
            swap(str,nonstr);
                
            if(i%6==5)
            swap(str,nonstr);
        }
        cout<<"Case "<<j<<":"<<endl;
        for(int i=1;i<=p;i++)
        { cout<<"Player "<<i<<": ";
            if(a[i]!=-1)
            {
            cout<<a[i];
            if(i==str || i==nonstr)
            cout<<"*";
            }
            else
            cout<<"DNB";
            cout<<endl;
        }   
    }    
}
