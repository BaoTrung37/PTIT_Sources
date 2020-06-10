//
// Code By CodeWar :3
#include <bits/stdc++.h>
using namespace std;
typedef long long i64;
const int mod = 1e9+7;
#define pb push_back;
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;
int n,k;
i64 res ,d[26]= {0};
string s;
void solve(){
	cin >> n >> k >> s;
	for(int i = 0 ; i < s.length() ; i++)
		d[s[i] - 'A']++;
	sort(d, d + 26);
	for(int i = 25 ; i >= 0 ; i--){
		if(k >= d[i]){
			res +=  (i64) d[i] * d[i];
			k -= d[i];
		}
		else{
			res += (i64) k * k;
			k = 0;
		}
		if(k == 0) break;
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