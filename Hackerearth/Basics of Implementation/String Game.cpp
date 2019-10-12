/*
https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/alice-and-string-game-dbd6adc3/
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    
    int t;
    cin>>t;
    while(t--)
    {
        int freq[26]={},different=0;
        string s;
        cin>>s;
        for(int i=0;i<s.length();i++)
        {    if(!freq[s[i]-'a'])
                different++;
            freq[s[i]-'a']++;
        }
        if(different%2!=0)
        cout<<"Player1"<<endl;
        else
        cout<<"Player2"<<endl;
        
    }
    
}
