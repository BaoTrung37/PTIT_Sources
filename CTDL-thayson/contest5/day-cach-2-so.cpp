/**
 *    authur: Bao Trung
 * https://practice.geeksforgeeks.org/problems/stickler-theif/0
**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;
const int nmax = 1004;
int n,a[nmax],dp[nmax];
void solve(){
	cin >> n;
	for(int i = 1; i <= n ; i++)
		cin >> a[i];
	dp[1] = a[1];
	dp[2] = max(a[1],a[2]);
	for(int i = 3; i <= n ; i++)
		dp[i] = max(dp[i - 2] + a[i] , dp[i - 1]);
	cout << dp[n] << '\n';
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int t = 1; cin >> t;
	while(t--){solve();}
	return 0;
}

// Code By CodeWar :3