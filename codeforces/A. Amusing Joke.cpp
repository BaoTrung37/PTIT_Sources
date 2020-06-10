//
// Code By CodeWar :3
#include <bits/stdc++.h>
#define pb push_back;
typedef long long i64;
typedef long i32;
const int mod = 1e9+7;
const int nMax = 1e6+5;
using namespace std;
string a,b,c,d;
void input(){
    cin >> a >> b >> c;
}

void solve(){
    d = a + b;
    sort(c.begin(),c.end());
    sort(d.begin(),d.end());
    cout << ((d == c)?"YES":"NO");
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t = 1; //cin >> t;
    //cin.ignore();
    while(t--){
        input();
        solve();
    }
    return 0;
}

// Code By CodeWar :3   