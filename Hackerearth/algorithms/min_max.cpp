#include<bits/stdc++.h>
using namespace std;
int main(){
    
    int n;
    cin>>n;
    int ar[n];
    for(int i=0; i<n; i++){
        cin>>ar[i];
    }
    
    sort(ar,ar+n);
    
    int sum1=0;
    int sum2 = 0;
    for(int i=0; i<n-1; i++){
        sum1+=ar[i];
        sum2+=ar[n-i-1];
    }
    cout<<sum1<<" "<<sum2<<endl;
    
    
    
}