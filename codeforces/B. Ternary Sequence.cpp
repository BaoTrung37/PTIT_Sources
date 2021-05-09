/**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define ii pair<int, int>
#define X first
#define Y second
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<int>a(n); for(int i=0;i<n;i++)cin>>a[i];
#define db(x) cerr << #x << " = "  << (x) << ' ';
const int N = 200005;

ll a,b,c;
ll x ,y , z;
void solve(){
	cin >> a >> b >> c;
	cin >> x >> y >> z;
	ll res = min(c,y);
	res -= max(z - a - c + res, 0LL);
	cout << res * 2 << "\n";
}

int main(){
	ios_base::sync_with_stdio(0);cin.tie(0);
	
	int t = 1; cin >> t;
	while(t--){solve();}
	return 0;
}

// Code By Pain (Bao Trung)