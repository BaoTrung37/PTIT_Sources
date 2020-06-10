//
// Code By CodeWar :3
#include <bits/stdc++.h>
#define pb push_back;
typedef long long i64;
typedef long i32;
const int mod = 1e9+7;
const int nMax = 1e6+5;
using namespace std;
int n;
vector <int> a;
void input(){
    cin >> n;
}

void solve(){
    a.resize(1005);
    for(int i = 0 ,x; i < n ; i++){
        cin >> x;
        a[x]++;
    }
    int vt = 0;
    for(int i = 1 ; i < 1001 ; i++){
        if(a[i] > a[vt]){
            vt = i;
        }
    }
    cout << vt << endl;
    a.clear();
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t--){
        input();
        solve();
    }
    return 0;
}

// Code By CodeWar :3