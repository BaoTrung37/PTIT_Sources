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
	set <int> st;
	for(int i = 0,x; i < n ; i++){
		cin >> x;
		st.insert(x);
	}
	int res = 0;
	while(! st.empty()){
		int m = *st.rbegin();
		st.erase(m);
		if(m % 2 == 0){
			res ++;
			st.insert(m / 2);
		}
	}
	cout << res << endl;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int t = 1; cin >> t;
	while(t--){solve();}
	return 0;
}

// Code By CodeWar :3