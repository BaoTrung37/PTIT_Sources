//
// Code By CodeWar :3
#include <bits/stdc++.h>
#define pb push_back;
typedef long long i64;
const int mod = 1e9+7;
using namespace std;
int n,a[12][12];
void input(){
    cin >> n;
    for(int i = 0 ; i < n ; i++){
        a[i][0] = 1;
        a[0][i] = 1;
    }
}

void solve(){
    for(int i = 1 ; i < n ; i++){
        for(int j = 1 ; j < n ; j++){
            a[i][j] = a [i - 1][j] + a[i][j - 1];
        }
    }
    cout << a[n-1][n-1];
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