#include<iostream>
#include<string>
using namespace std;
 
int main()
{
    string s;
    int t,count1,count2;
    cin>>t;
    while(t--)
    {
        cin>>s;
        count1=0;
        count2=0;
        int n=s.size();
        for(int i=0;i<n;i++)
        {
            if(s[i]=='S'&&i<=n-7)
            {
             if(s[i+1]=='U')
             if(s[i+2]=='V')
             if(s[i+3]=='O')
             {
                 count1++;
                 if(s[i+4]=='J')
                 if(s[i+5]=='I')
                 if(s[i+6]=='T')
                 count2++;
             }
            }
            if(s[i]=='S'&&i<=n-4&&i>n-7)
            if(s[i+1]=='U')
            if(s[i+2]=='V')
            if(s[i+3]=='O')
            count1++;
        }
      cout<<"SUVO = "<<count1-count2<<", SUVOJIT = "<<count2<<endl;  
    }
    return 0;
}