/* problem link - https://codechef.com/problems/WALK */


#include<bits/stdc++.h> 
using namespace std;    
int main() {
  int t;
  cin>>t;
  while(t--) {
    long long int n,max=INT_MIN,i;
    cin>>n;
    long long int v[n];
    for(int i=0;i<n;i++) {
      cin>>v[i];
      v[i] += i;
      if(max<= v[i])
      max = v[i];
    }
    cout<<max<<endl;
  }
}
 