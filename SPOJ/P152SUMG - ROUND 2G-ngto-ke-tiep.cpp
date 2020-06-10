//
// Code By CodeWar :3
#include <bits/stdc++.h>
#define pb push_back;
typedef long long i64;
typedef long i32;
const int mod = 1e9+7;
const int nMax = 1e6+5;
using namespace std;
int n,m,a[100] = {0};
vector <int> v;
void input(){
    cin >> n >> m;
}
void sang(){
    for(int i = 2 ; i < 10 ; i++){
        if(a[i] == 0){
            for(int j = i * i ; j <= 50 ; j += i)
                a[j] = 1;
        }
    }
    for(int i = 2 ; i <= 50 ; i++){
        if(a[i] == 0)
            v.push_back(i);
    }
}
void solve(){
    sang();
    for(int i = 0 ; i < v.size() ; i++){
        if(v[i] == n && v[i+1] == m){
            cout << "YES";
            return;
        }
    }
    cout << "NO";
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