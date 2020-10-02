//https://www.codechef.com/COOK115B/problems/XORGM

#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
     int t , i , j , n;
     cin>>t;
     while(t--)
     {
          cin>>n;
          vector< int > a(n) , b(n);
          for(i=0 ; i<n ;i++)
          {
               cin>>a[i];
          }
          for(i=0 ; i<n ; i++)
          {
               cin>>b[i];
          }
          int x = 0 ;
          for(i=0 ;i<n;i++)
          {
               x = x^a[i]^b[i];
          }
          sort(b.begin() , b.end());
          for(i=0 ; i<n ;i++)
          {
               int k =  x^a[i];
               if(!binary_search(b.begin() , b.end() , k ))
               {
                    break;
               }

          }
          if(i==n)
          {
               for(i=0 ; i<a.size() ; i++){
                    int xr = a[i]^x;
                    cout<<xr<<" ";
               } 
               cout<<endl;
          }
          else
          {
               cout<<-1<<endl;
          }
          
     }
}
