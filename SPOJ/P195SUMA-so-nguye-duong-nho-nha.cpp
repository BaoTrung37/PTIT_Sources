//
// Code By CodeWar :3
#include <bits/stdc++.h>
#define pb push_back;
typedef long long i64;
typedef long i32;
const int mod = 1e9+7;
const int nMax = 1e6+5;
using namespace std;
int n,k;
i32 a[1000005];
void input(){
    cin >> n >> k;
    for(int i = 0 ; i < n ; i++)
        cin >> a[i];
}

void solve(){
    sort(a,a+n);
    if(k == 0){
		if(a[0] <= 1)	cout << "-1";
		else cout << "1";
	}
	else{
		int dem = 0;
		if((a[k-1] ==a[k]))	cout << "-1";
		else	cout << a[k-1];
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