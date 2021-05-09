/**
 *    authur: Bao Trung
**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;
int n;
vector <ll> a;
void input(){
	ll res = 1;
	a.push_back(0);
	for(int i = 1; i <= 30 ; i++){
		res = res * 2;
		a.push_back(res);
	}
}
void solve(){
	cin >> n;
	ll res = 0;
    res += a[n];
	for(int i = 1 ; i < n / 2; i++){
		res += a[i];
	}
	for(int i = n / 2 ; i < n; i++)
		res -= a[i];
	cout << res << '\n';
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int t = 1; cin >> t;
	input();
	while(t--){solve();}
	return 0;
}

// Code By CodeWar :3