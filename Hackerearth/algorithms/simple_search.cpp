#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int ar[n];
    for(int i=0; i<n; i++){
        cin>>ar[i];
    }
    int k;
    cin>>k;
    
    for(int i=0; i<n; i++){
        if(ar[i]==k){
            cout<<i<<endl;
            break;
        }
    }
}