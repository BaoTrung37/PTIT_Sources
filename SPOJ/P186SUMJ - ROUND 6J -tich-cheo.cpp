//
// Code By CodeWar :3
#include <bits/stdc++.h>
#define pb push_back;
typedef long long i64;
typedef long i32;
const int mod = 1e9+7;
const int nMax = 1e6+5;
using namespace std;
int n,m,res;
vector < int > a;
vector < int > b;
i64 k;
int Search(vector <int > a, int l ,int r, int key){
	while(l <= r){
		int mid = (l + r)/2;
		if (a[mid] == key) return mid;
		else if(a[mid] > key) r = mid - 1;
		else l = mid + 1;
	}
	return -1;
}
void input(){
    cin >> n >> m >> k;
	for(int i = 0,x ; i < n ; i++){
		cin >> x;
		a.push_back(x);
	}
	for(int i = 0,x ; i < m ; i++){
		cin >> x;
		b.push_back(x);
	}
    sort(b.begin(),b.end());
}

void solve(){
	if(k == 0){
		int cnt1 = 0, cnt2 = 0;
		for(int i = 0 ; i < n ; i ++){
			if(a[i] == 0)
				cnt1++;
		}
		for(int i = 0 ; i < m ; i++)
			if(b[i] == 0)
				cnt2++;
		cout << cnt1 * m + cnt2 * n - cnt1 * cnt2;
	}
	else{
		int cnt = 0;
		for(int i = 0 ; i < n ; i++){
			if(a[i] != 0 && k % a[i] == 0){
				int kt = k / a[i];
				int low = lower_bound(b.begin(),b.end(),kt) - b.begin();
				int up  = upper_bound(b.begin(),b.end(),kt) - b.begin();
				cnt += (up - low);
			}
		}
		cout << cnt;
	}
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t = 1; //cin >> t;
    while(t--){
        input();
        solve();
    }
    return 0;
}

// Code By CodeWar :3