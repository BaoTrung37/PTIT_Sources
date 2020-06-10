/**
 *    authur: Bao Trung <3
 * https://codeforces.com/problemset/problem/1203/C
**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<ll>a(n); for(auto &z : a)cin>>z;
const int mod = 1e9+7;
int n;
void solve(){
	cin >> n;
	vector <ll> a(n);
	for(int i = 0 ; i < n ; i++)
		cin >> a[i];
	ll gcd = a[0];
	set <ll> st;
	for(int i = 1; i < n ;i++)
		gcd = __gcd(a[i],gcd);
	for(ll i = 1 ; i * i <= gcd ; i++){
		if(gcd % i == 0){
			st.insert(i);
			if(i * i != gcd){
				st.insert(gcd / i);
			}
		}
	}
	cout << st.size();
	
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int t = 1; //cin >> t;
	while(t--){solve();}
	return 0;
}

// Code By CodeWar :3