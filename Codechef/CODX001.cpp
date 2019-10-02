#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define pie 3.14
typedef long long int ll;
/*
 .d8b.  d8888b. db    db  .d8b.  d8b   db 
d8' `8b 88  `8D `8b  d8' d8' `8b 888o  88 
88ooo88 88oobY'  `8bd8'  88ooo88 88V8o 88 
88~~~88 88`8b      88    88~~~88 88 V8o88 
88   88 88 `88.    88    88   88 88  V888 
YP   YP 88   YD    YP    YP   YP VP   V8P 
                                          
                                          
*/


///////////////////////////////////////
int isPalindrome(string str) 
{ 
    // Start from leftmost and rightmost corners of str 
    int l = 0; 
    int h = str.length() - 1; 
  
    // Keep comparing characters while they are same 
    while (h > l) 
    { 
        if (str[l++] != str[h--]) 
        { 
            
            return 0; 
        } 
    } 
    return 1;
} 
int main()
{
ios_base::sync_with_stdio(false); 
cin.tie(NULL);
#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif
ll n;
cin>>n;

while(n--)
{
    string s,s1;
    ll my[26]={0};
    ll i,pos,c=0,k;
    char a,b;
    cin>>s;
    for(i=0;i<s.length();i++)
    {
        k=s[i]-'a';
        my[k]++;
        pos=k;
    }
//Replace any two diff characters
    //cout<<pos;
    if(my[pos]==s.length())
        cout<<"-1\n";
    else
    {
       // cout<<"0\n";
        for(i=0;i<26;i++)
        {
           while(my[i]!=0)
           {
            s1=s1+(char)(i+'a');
            my[i]--;
           }
        }
        cout<<s1<<endl;

}
}
}
