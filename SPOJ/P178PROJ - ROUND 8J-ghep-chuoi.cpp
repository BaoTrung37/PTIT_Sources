//
// Code By CodeWar :3
#include <bits/stdc++.h>
#define pb push_back;
typedef long long i64;
typedef long i32;
const int mod = 1e9+7;
const int nMax = 1e6+5;
using namespace std;
priority_queue <int,vector<int>,greater<int>> q;
int n;
void input(){
    cin >> n;
    for(int i = 0 ,x; i < n ; i++){
        cin >> x;
        q.push(x);
    }
}

void solve(){
    i64 res = 0;    
    while(!q.empty()){
        int l ,r;
        l = q.top();
        q.pop();
        r = q.top();
        q.pop();
        res = ( res + (l + r)) % mod;
        if(!q.empty())
            q.push((l + r) % mod);
    }
    cout << res;
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