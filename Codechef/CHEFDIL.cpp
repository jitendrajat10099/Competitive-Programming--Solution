#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
ios_base::sync_with_stdio(false); 
cin.tie(NULL);
#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif
ll t;
scanf("%lld",&t);
while(t--)
{
     fflush(stdin);
     ll i,count=0;
     string str;
     cin>>str;
     //cout<<str<<"\n";
     for(i=0;i<str.length();i++)
     {
          if(str[i]=='1')
               count++;
     }
(count%2==1)?printf("WIN\n"):printf("LOSE\n");

}
}
