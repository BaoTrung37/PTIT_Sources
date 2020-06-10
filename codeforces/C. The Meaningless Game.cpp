//https://codeforces.com/contest/834/problem/C
//Code By CodeWar :3
#include <bits/stdc++.h>
#define pb push_back;
typedef long long i64;
const int mod = 1e9+7;
using namespace std;
i64 a,b;
void input(){
    cin >> a >> b;
}

void solve(){
    i64 z = cbrt(a*b);
    i64 x = a / z;
    i64 y = b / z;
    if(x * x * y == a && x * y * y == b)     cout << "Yes" << endl;
    else cout << "No" << endl;
}
 
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t ; cin >> t;
    while(t--){
        input();solve();
    }
    return 0;
}