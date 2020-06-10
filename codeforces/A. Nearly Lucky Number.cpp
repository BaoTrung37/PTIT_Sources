//
// Code By CodeWar :3
#include <bits/stdc++.h>
#define pb push_back;
typedef long long i64;
typedef long i32;
const int mod = 1e9+7;
const int nMax = 1e6+5;
using namespace std;
char s;
void input(){
    
}

void solve(){
    int i {0};
    while(cin >> s){
        i += (s=='4' || s== '7');
    }
    cout << ((i== 4 || i == 7) ? "YES":"NO");
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