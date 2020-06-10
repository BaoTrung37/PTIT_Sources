	//
	// Code By CodeWar :3
	#include <bits/stdc++.h>
	using namespace std;
	typedef long long i64;
	const int mod = 1e9+7;
	#define pb push_back;
	#define all(x) (x).begin(), (x).end()
	#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;
	int a[10],cnt;
	void solve(){
		for(int i = 0 ,x; i < 6 ; i++){
			cin >> x;
			a[x]++;
		}
		int head = 0, foot = 0;
		for(int i = 0 ; i < 11 ; i++){
			if(a[i] >= 4)
				foot = 1;
			if(a[i] == 2 || a[i] == 6)
					head = 1;
		}
		if(foot == 0)
			cout << "Alien";
		else if(head == 1) cout << "Elephant";
		else cout << "Bear";
	}

	int main(){
		ios_base::sync_with_stdio(0);
		cin.tie(0); cout.tie(0);
		int t = 1; //cin >> t;
		while(t--){solve();}
		return 0;
	}

	// Code By CodeWar :3