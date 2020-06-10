/**
 *    authur: Bao Trung <3
**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;
const int mod = 1e9+7;
ll x,y,a,b;
void solve(){
	ll res = 0,res2 = 0;
	cin >> x >> y >> a >> b;
	if (x == 0 && y == 0){
		cout << 0 << '\n';
		return;
	} 
	if( x  > y) swap (x,y);
	res = (y - x) * a + x * b;
	res2 =  x * a + y * a;
	cout << min(res,res2) << endl;

}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int t = 1; cin >> t;
	while(t--){solve();}
	return 0;
}

// Code By CodeWar :3