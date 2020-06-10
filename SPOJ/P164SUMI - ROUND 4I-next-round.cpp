//
// Code By CodeWar :3
#include <bits/stdc++.h>
#define pb push_back;
typedef long long i64;
typedef long i32;
const int mod = 1e9+7;
const int nMax = 1e6+5;
using namespace std;
int n,k,a[100];
void input(){
    cin >> n >> k;
    for(int i = 0 ; i < n ; i++)
        cin >> a[i];
}

void solve(){
    int res = 0;
    for(int i = 0 ; i < n ; i++){
        if(a[i] > 0 && a[i] >= a[k])
            res++;
        else break;
    }
    cout << res;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t = 1; // cin >> t;
    while(t--){
        input();
        solve();
    }
    return 0;
}

// Code By CodeWar :3