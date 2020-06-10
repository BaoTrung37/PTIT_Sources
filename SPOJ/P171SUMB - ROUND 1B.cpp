//
// Code By CodeWar :3
#include <bits/stdc++.h>
#define pb push_back;
typedef long long i64;
const int mod = 1e9+7;
using namespace std;
int n,k;
vector <int> a;
vector <int> b(100004,0);
void input(){
    cin >> n >> k;
    a.resize(n);
    for(auto &i : a)
        cin >> i;
}

void solve(){
    for(int i = 0 ; i < n ; i++){
        b[a[i] % k]++;
    }
    if(k % 2 == 0){
        b[k/2] = min(b[k/2],1);
    }
    int res = min(b[0],1);
    for(int i = 1; i <= k/2 ; i++){
        res += max(b[i],b[k-i]);    
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