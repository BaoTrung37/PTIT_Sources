//
// Code By CodeWar :3
#include <bits/stdc++.h>
#define pb push_back;
typedef long long i64;
typedef long i32;
const int mod = 1e9+7;
const int nMax = 1e6+5;
using namespace std;
int n,m;
int a[100],b[100];
void input(){
    cin >> n >> m;
    for(int i = 0 ; i < n ; i++)
        cin >> a[i];
    for(int i = 0 ; i < m ; i++)
        cin >> b[i];
}

void solve(){
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < m ; j++){
            if(a[i] == b[j]){
                cout << a[i] << " ";
            }
        }
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