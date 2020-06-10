/**
 *    authur: Bao Trung
**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;
int n,k;
void solve(){
	cin >> n >> k;
	vector <int> a(n);
	map <int,int> mp;
	vector <int> res;
	for(int i = 0 ; i < n ; i++){
		cin >> a[i];
		mp[a[i]]++;
		if(mp[a[i]] == 1) res.push_back(a[i]);
	}
	if(mp.size() > k){
		cout << -1 << '\n';
		return;
	}
	while(res.size() < k){
		res.push_back(res[0]);
	}
	cout << res.size() * n << '\n';
	for(int j = 0 ; j < n ; j++)
		for(int i = 0 ; i < res.size() ; i++)
			cout << res[i] << ' ';
	cout << '\n';
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int t = 1; cin >> t;
	while(t--){solve();}
	return 0;
}

// Code By CodeWar :3