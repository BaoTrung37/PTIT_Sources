//
// Code By CodeWar :3
#include <bits/stdc++.h>
#define pb push_back;
typedef long long i64;
const int mod = 1e9+7;
using namespace std;
int n;
void input(){
    cin >> n;
}

void solve(){
    if(n % 2 == 1){
        cout << 7;
        n -= 3;
    }
    while(n > 0){
        cout << 1;
        n -= 2;
    }
    cout << endl;
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