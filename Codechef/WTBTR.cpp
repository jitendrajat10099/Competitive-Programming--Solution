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
ll t,n,diff;
cin>>t;
while(t--)
{
ll i,arr[100005]={0},x,y,mi=1000000009ll,arr1[100005]={0},mi2=1000000009ll;
cin>>n;
for(i=0;i<n;i++)
{
	cin>>x>>y;
	arr[i]=(y-x);
	arr1[i]=(y+x);
}
sort(arr,arr+n);
sort(arr1,arr1+n);
//find 2 array elements which have min diff
for(i=0;i<(n-1);i++)
{
	diff=arr[i+1]-arr[i];
	if(diff<mi)
		mi=diff;
}
for(i=0;i<(n-1);i++)
{
	diff=arr1[i+1]-arr1[i];
	if(diff<mi2)
		mi2=diff;
}
if(mi2<mi)
	mi=mi2;
cout << fixed;
cout << setprecision(1);
cout<<(long double)mi/2<<endl;
}
}
