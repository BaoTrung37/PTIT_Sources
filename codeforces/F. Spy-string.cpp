/**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;

int n,m,d=26;
vector <string> a;
// đếm số phần tử khác nhau trong string
int cnt(string a,string b){
	int res = 0;
	for(int i = 0 ; i < m; i++){
		if (a[i] != b[i])
			res++;
	}
	return res;
}
// kiểm tra tất cả string xem có cặp string nào có chênh lệch lớn hơn 1
bool check(string s){
	for(int i = 0 ; i < n ; i++){
		if(cnt(s,a[i]) > 1){
			return false;
		}
	}
	return true;
}
void solve(){
	cin >> n >> m;
	a.clear();
	a.resize(n);
	for(int i = 0 ; i < n ; i++){
		cin >> a[i];
	}
	for(int j = 0 ; j < m ; j++){
		string ans = a[0];
		ans[j] = 'a';
		ans[j]--;
		int l = d;
		while(l--){
			ans[j]++;
			if(check(ans)){
				cout << ans << '\n';
				return;
			}
		}
	}
	cout << "-1\n";
}

int main(){
	ios_base::sync_with_stdio(0);cin.tie(0);
	
	int t = 1; cin >> t;
	while(t--){solve();}
	return 0;
}

// Code By CodeWar :3 (Bao Trung)