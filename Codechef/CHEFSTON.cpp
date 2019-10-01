#PROBLEM : https://www.codechef.com/problems/CHEFSTON

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
   ll t;
   cin>>t;
   
   while(t--)
   {
       ll n,k;
       cin>>n>>k;
       
       ll a[n],b[n],i,ans=0;
       
       for(i=0;i<n;i++)
       cin>>a[i];
       
       for(i=0;i<n;i++)
       cin>>b[i];
       
       for(i=0;i<n;i++)
       ans=max(ans,(k/a[i])*b[i]);
       
       cout<<ans<<"\n";
       
       
   }
}
