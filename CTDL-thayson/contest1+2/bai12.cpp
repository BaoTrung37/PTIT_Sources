//
// Code By CodeWar :3
#include <bits/stdc++.h>
using namespace std;
typedef long long i64;
const int mod = 1e9+7;
#define pb push_back;
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;
int a[100];
int n,k;  
int kt(int a[],int n,int k){
	int s = 0;
	for(int i = 0;i < n; i++)
		if(a[i]) s++;
	if(s == k) return 1;
	return 0;
}
void solve(){
    cin >> n >> k;
    for(int i = 0 ; i < n ; i++)
        a[i] = 0;
    int OK = 0;
    while(!OK){
        if(kt(a,n,k)){
            for(int i = 0 ; i < n ; i++)
                cout << a[i];
            cout << '\n';
        }
        int i = n - 1;
        while( i >= 0 && a[i] == 1){
            a[i] = 0;
            i--;
        }
        if(i < 0) OK = 1;
        else a[i] = 1;
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t = 1; cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By CodeWar :3