/**
 *    authur: Bao Trung
 * https://codeforces.com/group/FLVn1Sc504/contest/274518/problem/Q
**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;

int n,m;
ll a[102][102],res;
ll dp[102][102] = {0};
void solve(){
	cin >> n >> m;
	for(int i = 1 ; i <= n ; i++){
		for(int j = 1; j <= m ; j++)
			cin >> a[i][j];
	}

	for(int i = 1 ; i <= n ; i++)
		dp[i][1] = a[i][1];

	for(int j = 1 ; j <= m ; j++)
		dp[0][j] = dp[n + 1][j] = -1e9;

	for(int j = 2 ; j <= m ; j++){
		for(int i = 1 ; i <= n ; i++){
			dp[i][j] = max(dp[i - 1][j - 1], max(dp[i][j - 1] , dp[i + 1][j - 1])) + a[i][j];
		}
	}
	// for(int i = 1 ; i <= n ; i++){
	// 	for(int j = 1 ; j <= m ; j++)
	// 		cout << dp[i][j] << ' ';
	// 	cout << '\n';
	// }
	res = dp[1][m];
	for(int i = 2 ; i <= n ; i++)
		res = max(res,dp[i][m]);
	cout << res << '\n';
}

int main(){
	ios_base::sync_with_stdio(0);cin.tie(0);
	int t = 1; //cin >> t;
	while(t--){solve();}
	return 0;
}

// Code By CodeWar :3