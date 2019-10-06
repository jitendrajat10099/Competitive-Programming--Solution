// problem-link https://github.com/Niteshrocks/Competitive-Programming--Solution.git

#include<bits/stdc++.h>
using namespace std;

int main(int argc, char** argv) {
    int T;
    cin>>T;
    while(T--){
        int N,M,a;
        cin>>N>>M;
        int flag =1,flag2=1;
        int ar[N] = {0};
        while(M--){
            cin>>a;
            ar[a-1]++;
            if(flag2){
                int *max = std::max_element(ar,ar+N);
                for(int i=0;i<N;i++){
                    if((*max-ar[i])>=2){
                        flag=0;
                        flag2=0;
                    }
                }
            }
        }
        
        if(flag){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
        
    }
    return 0;
}


