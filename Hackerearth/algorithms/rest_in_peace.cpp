#include<bits/stdc++.h>
using namespace std;
int main(){
    
    int testcases;
    cin>>testcases;
    string s;
    while(testcases--){
        int flag=0;
        cin>>s;
        
        for(int i=1; i<s.length(); i++){
            if(flag==0){
                if(s[i-1]=='2' && s[i]=='1'){
                    flag=1;
                break;
                }
            }
            
        }
        
        stringstream val(s);
        int no;
        val>>no;
        if(flag==1 || no%21==0){
            cout<<"The streak is broken!"<<endl;
        }else{
            cout<<"The streak lives still in our heart!"<<endl;
        }
        
    }
    
    
}