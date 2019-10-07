#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int ar[n];
    for(int i=0; i<n; i++){
        cin>>ar[i];
    }
    
    int q;
    cin>>q;
    while(q--){
        int x;
        cin>>x;
        int sum=0;
        int index=0;
        for(int i=0; i<n; i++){
            sum+=ar[i];
            if(sum>=x){
                index=i;
                break;
            }
        }
        
        if(sum>=x){
            cout<<index+1<<endl;
        }else{
            cout<<-1<<endl;
        }
    }
}