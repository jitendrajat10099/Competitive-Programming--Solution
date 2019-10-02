/*
    Codeforces 109C - Lucky Tree
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

const int N = (int)1e5+5;
int p[N], r[N];

bool cek(int w) {
	while (w > 0) {
		if (w%10 != 4 && w%10 != 7) return 0;
		w /= 10;
	}
	return 1;
}

int findset(int x) {
	if (p[x] == x) return p[x];
	return p[x] = findset(p[x]);
}

void joinset(int x, int y) {
	int px = findset(x), py = findset(y);
	if (px != py) {
		if (r[px] > r[py]) {
			p[py] = px;
			r[px] += r[py];
		}
		else {
			p[px] = py;
			r[py] += r[px];
		}
	}
}

int main() {
	int n;
	scanf("%d", &n);
	
	for (int i = 0; i <= n; i++) {
		p[i] = i;
		r[i] = 1;
	}
	
	for (int i = 0; i < n-1; i++) {
		int u, v, w;
		scanf("%d %d %d", &u, &v, &w);
		if (!cek(w)) joinset(u, v);
	}

	ll ans = 0;
	for (int i = 1; i <= n; i++) {
		ll tmp = n-r[findset(i)];
		ans += tmp*(tmp-1);	
	}
	
	printf("%lld\n", ans);
	
	return 0;	
}