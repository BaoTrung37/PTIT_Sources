//https://codeforces.com/problemset/status/616/problem/E/page/2?order=BY_PROGRAM_LENGTH_ASC
#include <bits/stdc++.h>
 
using namespace std;
#define int long long
 
int const mod = 1e9+7;
int n, m, ans;
 
void calc (int r){
	int k = n/r, st = n%r%mod, l = n/(k+1), len = (r-l)%mod;
	ans = (ans + st*len%mod + k%mod*(len*(len-1)/2%mod)%mod) % mod;
	if (l) calc(l); 
}
 
int32_t main(){
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	cin >> n >> m;
	calc(m);
	cout << ans << '\n';
}