#include <bits/stdc++.h>
using namespace std;

int main() {
    // your code goes here
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif
    int t;
    cin >> t;
    cout<<fixed;
    cout<<setprecision(10);
    while(t--){
        long long int n,sig;
        cin >> n >> sig;
        if(n==1 && sig!= 0){
            cout << "-1\n";
        }
        else if(n==1 && sig==0){
            cout << "0\n";
        }
        else{
            for(int i=0;i<(n-1);i++){
                cout << "0 ";
            }
            long double x;
           
            x =sig*n;
            x=(long double)x/sqrt(n-1);
            cout << x << "\n";
        }
    }
    return 0;
}

