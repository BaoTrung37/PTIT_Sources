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
    a.resize(n);
    for(int i = 0 ; i < n ; i++)
        cin >> a[i];
}

void solve(){
    int k = *max_element(a.begin(),a.end());
    int max = 0,cnt = 1;
    for(int i = 0 ; i < n - 1 ; i++){
        if(a[i] == k && a[i + 1] == k){
            cnt ++;
        }
        else cnt = 1;
        if(cnt > max) max = cnt;
    }
    cout << max;
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