//
// Code By CodeWar :3
#include <bits/stdc++.h>
#define pb push_back;
typedef long long i64;
const int mod = 1e9+7;
using namespace std;
int k,r;
void input(){
    cin >> k >> r;
}
void solve(){
    int i = 1;
    while(i < 11){
        if((i * k) % 10 == r || (i * k) % 10 == 0)
            break;
        else i++;
    }
        
    cout << i;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t = 1; //cin >> t;
    while(t--){
        input();solve();
    }
    return 0;
}

// Code By CodeWar :3