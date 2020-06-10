//https://codeforces.com/contest/975/problem/B
// Code By CodeWar :3
#include <bits/stdc++.h>
#define pb push_back;
typedef long long i64;
const int mod = 1e9+7;
using namespace std;
vector <int> a;
void input(){
    a.resize(14);
    for(auto &i : a)
        cin >> i;
    
}

void solve(){
    i64 res = 0;
    for(int i = 0 ; i < 14 ; i++){
        if(a[i]){
            int b[14];
            for(int j = 0 ; j < 14 ; j++)
                b[j] = a[j];
            int x = b[i],add;
            i64 tmp = 0;
            add = x / 14;
            b[i] = 0;
            for(int j = 0 ; j < 14 ; j++)   b[j] += add;
            for(int j = 1 ; j <= (x % 14) ; j++) b[(i + j) % 14] ++;
            for(int j = 0 ; j < 14 ; j++) if (b[j] % 2 == 0) tmp += b[j];
            res = max(res , tmp);
        }
    }
    cout << res ;
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