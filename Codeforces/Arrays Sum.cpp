/*
    Author  :   jignesh1604
    College :   SVNIT
    Link    :   https://codeforces.com/contest/1408/problem/B
*/
 
#include<bits/stdc++.h>
using namespace std;
 
void solve() {
    int n , i , k;
    cin >> n >> k;
    int a[n+1];
    set<int> st;
    for(i = 0 ; i < n ; i++) cin >> a[i];
    st.insert(a[0]);
    for(i = 1 ; i < n ; i++) {
        st.insert(a[i]);
        if(a[i] < a[i-1]) {
            cout << -1 << "\n";
            return;
        }
    }
    if(k == 1 && st.size() > 1) {
        cout << -1 << '\n';
        return;
    }
    if(k >= st.size()) {
        cout << 1 << "\n";
        return;
    }
    cout << 1 + (st.size()-k)/(k-1) + ((st.size()-k)%(k-1) ? 1 : 0) << "\n";
}
 
int main() {
    long long int tc = 1;
    cin >> tc;
    while(tc-- > 0) {
        solve();
    }
}
