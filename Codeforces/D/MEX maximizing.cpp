//https://codeforces.com/contest/1294/problem/D

#include<bits/stdc++.h>
using namespace std;
int main()
{
     int q , x , i ,j;
     cin>>q>>x;
     int a[x]={};
     int MEX =0 ;
     while(q--)
     {
          cin>>i;
          a[i%x]++;
          while(1)
          {
               if(a[MEX%x]>0)
               {
                    a[MEX%x]--;
                    MEX++;
               }
               else{
                    break;
               }
          }
          cout<<MEX<<" "<<endl;
     }
}
