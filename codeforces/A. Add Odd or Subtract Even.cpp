//
// Code By CodeWar :3
#include <bits/stdc++.h>
#define pb push_back;
typedef long long i64;
const int mod = 1e9+7;
using namespace std;
int a,b;
void input(){
    cin >> a >> b;
}

void solve(){
    int kt = b - a;
    if(kt == 0) cout << "0" << endl;
    else if(kt > 0){
        if(kt % 2 == 0) cout << 2 << endl;
        else cout << 1 << endl;
    }
    else{
        if(abs(kt) % 2 == 0) cout << 1 << endl;
        else cout << 2 << endl;
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t--){
        input();solve();
    }
    return 0;
}

// Code By CodeWar :3