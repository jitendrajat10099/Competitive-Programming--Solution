/*
https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/shreya-and-non-palindrome/
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int l=0,r=s.length()-1,m=-1;
    
    bool flag=true;
    while(l<=r)
    {
        if(s[l]!=s[r])
        {
            flag=false;
            break;
        }
        else
        {
          if(m==-1 && s[l]!=s[0])
            m=s.length()-l;
        }
        l++;
        r--;
    }
    if(!flag)
    cout<<s.length();
    else if(m!=-1)
    cout<<m;
    else
    cout<<0;
}
