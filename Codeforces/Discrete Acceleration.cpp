/*
    Author  :   jignesh1604
    College :   SVNIT
    Link    :   https://codeforces.com/contest/1408/problem/C
*/
 
#include<bits/stdc++.h>
using namespace std;
 
void solve() {
    long long int n , i , len;
    cin >> n >> len;
    long double a[n+5];
    vector<long double> pos;
    pos.push_back(0);
    for(i = 0 ; i < n ; i++) {
        cin >> a[i];
        pos.push_back(a[i]);
    }
    pos.push_back(len);
    vector<long double> speed1(n+5) , speed2(n+5) , time1(n+5) , time2(n+5);
    speed1[0] = 1;
    speed2[n+1] = 1;
    time1[0] = 0;
    time2[n+1] = 0;
    for(i = 1 ; i <= n+1 ; i++) {
        speed1[i] = speed1[i-1]+1.0;
        time1[i] = time1[i-1] + (pos[i]-pos[i-1])/(speed1[i-1]);
    }
    for(i = n ; i >= 0 ; i--) {
        speed2[i] = speed2[i+1] + 1.0;
        time2[i] = time2[i+1] + (pos[i+1]-pos[i])/(speed2[i+1]);
    }
    long double l = 0 , r = len;
    long double ans;
    while(l <= r) {
        long double mid = (l+r)/2;
        long long int ind = upper_bound(pos.begin() , pos.end() , (long double)mid) - pos.begin();
        long long int ind1 = ind-1;
        long double t1 = (long double)(((long double)mid-pos[ind1])/speed1[ind1]) + time1[ind1];
        long double t2 = (long double)((pos[ind] - (long double)mid)/speed2[ind]) + time2[ind];
//        cout << t1 << " " << t2 << "\n";
//        ans = t1;
        if(abs(t2-t1)*1000000 <= 1) {
            cout << fixed << t2 << "\n";
            return;
        }
        if(t2 < t1) {
            r = mid;
        }
        else {
            l = mid;
        }
    }
}
 
int main() {
    long long int tc = 1;
    cin >> tc;
    while(tc-- > 0) {
        solve();
    }
}
