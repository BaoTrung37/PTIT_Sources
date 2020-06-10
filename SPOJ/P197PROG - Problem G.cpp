/**
 *     author: CodeWar :3  
 * 
 * 	    5
 * 		1 1 1 1 1 
 * 		2
 * 
 * 		5
 * 		1 2 3 4 5
 * 		0
 *        
**/
#include <bits/stdc++.h>
using namespace std;
typedef long long i64;
const int mod = 1e9+7;
#define pb push_back;
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<i64>a(n); for(auto &z : a)cin>>z;
int n;
void solve(){
	cin >> n;
	set_vect(a,n);
	i64 Cnt_best = 0;
	int l = 0, r = n - 1;
	while(l < r){
		if(a[l] == a[r]){
			//lấy độ dài max
			Cnt_best = max(Cnt_best , a[l]);
			if(a[l + 1] <= a[r]){
				l++;
				a[l] += a[l - 1];
			}
			else{
				r--;
				a[r] += a[r + 1];
			}
		}
		else if(a[l] < a[r]){
			l++;
			a[l] += a[l - 1];
		}
		else{
			r--;
			a[r] += a[r + 1];
		}
	}
	cout << Cnt_best;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int t = 1; //cin >> t;
	while(t--){solve();}
	return 0;
}

// Code By CodeWar :3