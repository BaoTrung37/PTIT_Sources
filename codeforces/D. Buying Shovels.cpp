/**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;

int a,b;
void solve(){
    cin >> a >> b;
    if(b >= a){
        cout << 1 << "\n";
        return;
    }
    if(b == 1){
        cout << a << '\n';
        return;
    }
    int nmax = 1;
    for(int i = 1 ; i <= sqrt(a); i++){
        if(a % i == 0){
            if(i <= b) nmax = max(i,nmax);
            if(a / i <= b) nmax = max(a / i,nmax);
        }
    }
    cout << a / nmax  << '\n';
}

int main(){
	ios_base::sync_with_stdio(0);cin.tie(0);
	
	int t = 1; cin >> t;
	while(t--){solve();}
	return 0;
}

// Code By CodeWar :3 (Bao Trung)