//
// Code By CodeWar :3
#include <bits/stdc++.h>
using namespace std;
typedef long long i64;
const int mod = 1e9+7;
#define pb push_back;
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;
char c[102][102];
int n,res;
void solve(){
	cin >> n;
	for(int i = 0 ; i < n ; i++)
		for(int j = 0 ; j < n ; j++)
			cin >> c[i][j];
	for(int i = 0 ; i < n ; i++){
		int cnt1 = 0, cnt2 = 0;
		for(int j = 0 ; j < n ; j++){
			if(c[i][j] == 'C') cnt1++;
			if(c[j][i] == 'C') cnt2++;
		}
		res += (cnt1 * (cnt1 - 1) / 2) + (cnt2 * (cnt2 - 1) / 2);
	}
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