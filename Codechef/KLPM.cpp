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
ll i,j,n,k,l;
map<string,pair<ll,ll>>my;
string s,str;
string arr[101][101];
ll en[101][101];
ll st[101][101];
cin>>s;
ll c=0;
n=s.length();
for(i=0;i<n-1;i++)
{
	for(j=0;j<n-i;j++)
	{
     arr[i][j]=s.substr(j,i+1);
     st[i][j]=j;
     en[i][j]=j+i;
	}
}
/*for(i=0;i<n-1;i++)
{
	for(j=0;j<n-i;j++)
	{
		cout<<arr[i][j]<<" "<<st[i][j]<<" "<<en[i][j]<<endl;
	}
}*/
for(i=0;i<n-1;i++)
{
	for(j=0;j<n-i;j++)
	{
		for(k=0;k<n-1;k++)
		{
			for(l=i+j+1;l<n-k;l++)
			{
               str=arr[i][j]+arr[k][l];
               if(isPalindrome(str)==1 && en[i][j]<st[k][l])
               	{c++;
               		//cout<<arr[i][j]<<" "<<arr[k][l]<<endl;
               	}
			}
		}
	}
}
cout<<c;

}
