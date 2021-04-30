#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    long long n,i,temp;
    cin>>n;
    vector <long long> a;
    for(i=0;i<n;i++)
    {
    	cin>>temp;
    	a.push_back(temp);
	}
	sort(a.begin(),a.end());
	long long ans = 0, j = 0;
	for(i = 0; i < n; ++i) {
		while (j < n && a[j] - a[i] <= 5) {
			++j;
			ans = max(ans, j - i);
		}
	}
	
	cout << ans << endl;
}
