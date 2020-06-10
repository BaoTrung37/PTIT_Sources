//
// Code By CodeWar :3
#include <bits/stdc++.h>
#define pb push_back;
typedef long long i64;
typedef long i32;
const int mod = 1e9+7;
const int nMax = 1e6+5;
using namespace std;
i64 n,a[nMax];
void input(){
    cin >> n;
    for(int i = 0 ; i < n ; i++)
        cin >> a[i];
}

void solve(){
    i64 sum = 0;
    for(int i = 0 ; i < n ; i++){
        sum += a[i];
    }
    if(sum % 2 == 1){
        cout << sum;
    }
    else{
        sort(a,a+n);
        for(int i = 0 ; i < n ; i++){
            if(a[i] % 2 == 1){
                cout << sum - a[i];
                return;
            }
        }
        cout << "0";
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