/*
    Problem: https://www.spoj.com/problems/AMR11E/
*/

#include<bits/stdc++.h>

typedef long long int ll;

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n = 3000;

    int sieve[n];
   

    memset(sieve, 0, sizeof(sieve));

    for(int i=2;i<=n;i++){
        if(sieve[i] == 0){
            for(int j = 2*i;j<=n;j+=i){
                sieve[j] +=1;
                
            }
        }
    }
    

    int lucky[1001];
    memset(lucky,0,sizeof(lucky));
    int k = 1;
    for(int i=30;i<n && k<1001; i++){
        if(sieve[i] >=3){
            lucky[k++] = i;
        }
    }
    
    
    
    int t;
    cin >> t;
    while(t--){
        int num;
        cin >> num;

        cout << lucky[num] << '\n';


    }
    return 0;
}
