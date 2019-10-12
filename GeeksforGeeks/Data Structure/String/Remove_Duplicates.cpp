#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        string s;
        getline(cin,s);
        //cout<<s;
        vector<int> v(256,0);
        for(int i=0;i<s.size();i++){
            if(v[s[i]]==0){
                cout<<s[i];
                v[s[i]]=1;
            }
        }
    
      cout<<"\n";
        //cin.ignore();
    }
	return 0;
}
