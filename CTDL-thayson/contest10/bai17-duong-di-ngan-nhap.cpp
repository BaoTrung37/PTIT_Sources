/**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define ii pair<int, int>
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;
const int InF = 1e9+7;

int n, m, Q;
int a[105][105];
int dp[105][105];

void init() {
	cin >> n >> m;
	memset(a, 0, sizeof(a));
	for (int i = 1,u, v, z; i <= m; i++) {
		cin >> u >> v >> z;
		a[u][v] = a[v][u] = z; 
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			if (i == j) dp[i][j] = 0;
			else {
				if (a[i][j] == 0) {
					a[i][j] = dp[i][j] = InF;
				}
				else {
					dp[i][j] = a[i][j];
				}
			}
		}
	}
}

void Floyd(){
	for (int k = 1; k <= n; k++) {
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= n; j++) {
				if (dp[i][j] > dp[i][k]+dp[k][j]) {
					dp[i][j] = dp[i][k]+dp[k][j];
				}
			}
		}
	}
}

void solve() {
	Floyd();
	cin >> Q;
	int u, v;
	for (int i = 1; i <= Q; i++) {
		cin >> u >> v;
		cout << dp[u][v] << '\n';
	}
}
int main(){
	ios_base::sync_with_stdio(0);cin.tie(0);
	
	int t = 1; //cin >> t;
	while(t--){init();solve();}
	return 0;
}

// Code By CodeWar :3 (Bao Trung)