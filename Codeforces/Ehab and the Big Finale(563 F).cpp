#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <cstring>
#include <vector>
#include <iostream>
#include <map>
#include <set>
#include <algorithm>
#include <queue>
#include <sstream>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
#define SZ(x) (int)(x.size())
#define F0(i,n) for(int i=0;i<n;i++)
#define F1(i,n) for(int i=1;i<=n;i++)
#define CL(a,x) memset(x, a, sizeof(x));
#define P(x) cerr << #x << "=" << x << endl
 
const int MOD = 1000000007;
const double pi = atan(1.0)*4.0;
const double eps = 1e-8;
ll gcd(ll x, ll y) { return y ? gcd(y, x%y) : x; }
int bc(int n) { return n ? bc((n - 1)&n) + 1 : 0; }
 
const int N = 1000005;
int i, j, k, m, n;
int ans;
vector<int> adj[N];
int dead[N], sz[N], h[N], pr[N];
 
int dist(int u) {
	cout << "d " << u << endl;
	int ret;
	cin >> ret;
	return ret;
}
 
int sub(int u) {
	cout << "s " << u << endl;
	int ret;
	cin >> ret;
	return ret;
}
 
void over(int u) {
	cout << "! " << u << endl;
	exit(0);
}
 
void dfs(int i, int par) {
	sz[i] = 1;
	for (int j : adj[i]) if (j != par && !dead[j]) {
		pr[j] = i;
		h[j] = h[i] + 1;
		dfs(j, i);
		sz[i] += sz[j];
	}
}
 
int main() {
	
	int tn = 1;
	F1(tt, tn) {
		cin >> n;
		F0(k, n - 1) {
			cin >> i >> j;
			adj[i].push_back(j);
			adj[j].push_back(i);
		}
 
		int d = dist(1);
		int root = 1;
 
		while (1) {
			if (d == 0) over(root);
 
			h[root] = 0;
			dfs(root, -1);
 
			int oc = -1;
			for (int j : adj[root]) if (!dead[j]) {
				if (oc == -1) oc = j;
				else oc = -2;
			}
			if (oc > 0) {
				root = oc;
				d--;
				continue;
			}
 
			int y = root;
			int sg = 1;
			while (sg) {
				sg = 0;
				for (int j : adj[y]) if (!dead[j] && h[j] == h[y] + 1 && 2 * sz[j] + 1 >= sz[root]) {
					y = j;
					sg = 1;
					break;
				}
			}
			if (y == root) {
				dead[root] = 1;
				root = sub(y);
				d--;
			}
			else {
				int d2 = dist(y);
				if (d2 == 0) over(y);
				if (h[y] + d2 == d) {
					root = y;
					dead[pr[root]] = 1;
					d = d2;
				}
				else {
					dead[y] = 1;
				}
			}
		}
 
	}
 
	return 0;
}
