//
// Code By CodeWar :3
#include <bits/stdc++.h>
#define pb push_back;
typedef long long i64;
const int mod = 1e9+7;
using namespace std;
int n,a[5] = {100,20,10,5,1};
void input(){
    cin >> n;
}

void solve(){
    int res = 0,x;
    for(int i = 0 ; i < 5 ; i++){
        if(n >= a[i]){
            x = n / a[i];
            res += x;
            n -= x * a[i];
        }
    }
    cout << res;
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