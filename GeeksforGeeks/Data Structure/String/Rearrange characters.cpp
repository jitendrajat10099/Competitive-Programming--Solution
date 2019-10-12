/*
https://practice.geeksforgeeks.org/problems/rearrange-characters/0
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t,i,n;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>s;
        int freq[26]={};
        for(i=0;i<s.length();i++)
        {
            freq[s[i]-'a']++;
        }
        sort(freq,freq+26,greater<int>());
        int n=s.length();
        if(freq[0]<=n-freq[0])
        cout<<1<<endl;
        else
        cout<<0<<endl;
        
    }
    return 0;
}
