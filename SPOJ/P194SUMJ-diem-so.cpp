//https://codeforces.com/problemset/problem/337/C
#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
 
const int mod = 1e9 + 9;
ll n, m, k, ans;
 
ll power(ll b, int e) {
	return e? power(b * b % mod, e >> 1) * (e & 1? b: 1) % mod: 1;
}
 
int main(){
	cin >> n >> m >> k;
	ll d = n - (n - m) * k;
	ll t = d / k;
	if (t > 0) {
		ans = power(2, t + 1) - 2;
		ans %= mod;
		if (ans < 0)
			ans += mod;
		ans = ans * k % mod;
		ans += d % k;
		ans += (k - 1) * (n - m);
		ans %= mod;
	}
	else
		ans = m;
	cout << ans << '\n';
	return 0;
}