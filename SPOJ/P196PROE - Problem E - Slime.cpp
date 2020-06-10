//
// Code By CodeWar :3
#include <bits/stdc++.h>
using namespace std;
typedef long long i64;
const int mod = 1e9+7;
#define pb push_back;
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;
int n;
void solve(){
	cin >> n;
	set_vect(a,n);
	sort(all(a));
	i64 res = a[n-1];
	if(n > 1) res -= a[0];
	for(int i = 1 ; i < n - 1; i++)
		res += abs( a[i] );
	cout << res;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int t = 1; //cin >> t;
	while(t--){solve();}
	return 0;
}

// Code By CodeWar :3