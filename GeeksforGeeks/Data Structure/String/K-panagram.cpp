/*
link-https://practice.geeksforgeeks.org/problems/k-pangrams/0

*/

#include <iostream>
#include<string>
using namespace std;

int main() {
	//code
	int t,k,i;
	cin>>t;
	while(t--)
	{
	    string s;
	    cin>>s;
	    cin>>k;
	    int freq[26]={};
	    int extranum=0;
	    int notpresent=0;
	    for(i=0;i<s.length();i++)
	    {
	        freq[s[i]-'a']!=0 ? extranum++ : freq[s[i]-'a']=1 ;
	    }
	    for(i=0;i<26;i++)
	    if(freq[i]==0)
	    notpresent++;
	    if(extranum>=notpresent && notpresent<=k)
	    cout<<1<<endl;
	    else
	    cout<<0<<endl;
	}
	
	
	return 0;
}
