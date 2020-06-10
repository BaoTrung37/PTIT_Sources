/**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;
int n;
char a[1000][1000];
void solve(){
	cin >> n;
	for(int i = 0 ; i < n ; i++){
		for(int j = 0 ; j < n ; j++){
			cin >> a[i][j];
		}
	}
	for(int i = 0 ; i < n - 1 ; i++){
		for(int j = 0 ; j < n - 1 ; j++){
			if(a[i][j] == '1'){
				if(a[i + 1][j] == '0' && a[i][j + 1] == '0'){
					cout << "NO\n";
					return;
				}
			}
		}
	}
	cout << "YES\n";
}

int main(){
	ios_base::sync_with_stdio(0);cin.tie(0);
	
	int t = 1; cin >> t;
	while(t--){solve();}
	return 0;
}

// Code By CodeWar :3 (Bao Trung)