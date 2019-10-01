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
int main()
{
ios_base::sync_with_stdio(false); 
cin.tie(NULL);
#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif
ll t;
cin>>t;
while(t--)
{
  ll n,i,y,m,d,y1,m1,d1,sum=0,ans=0,leap,yd;
  ll arr[100005]={0};
  ll arr1[100005]={0};
  cin>>n;
  for(i=1;i<=n;i++)
    {
      cin>>arr[i];
      sum=sum+arr[i];
    }
    arr1[1]=arr[1];
    for(i=2;i<=n;i++)
      arr1[i]=arr1[i-1]+arr[i];
  cin>>y>>m>>d;
  cin>>y1>>m1>>d1;
  // if(m<m1 ||(m==m1 && d<=d1))
  // {
    leap=(y1-1)/4-y/4;
    yd=sum*(y1-y);
ans=ans+yd+leap+arr1[m1-1]+d1-d-arr1[m-1]+1;
  if(y%4==0)
    ans++;
  cout<<ans<<"\n";


}
}
