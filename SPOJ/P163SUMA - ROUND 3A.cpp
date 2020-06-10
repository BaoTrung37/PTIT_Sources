//
// Code By CodeWar :3
#include <bits/stdc++.h>
#define pb push_back;
typedef long long i64;
typedef long i32;
const int mod = 1e9+7;
const int nMax = 1e6+5;
using namespace std;
i64 n,k;
string s;
int d[100] = {0};
void input(){
    cin >> n >> k >> s;
}
 
void solve(){
    i64 res = 0;
    for(int i = 0 ; i < s.length() ; i++)
        d[s[i] - 'A']++;
    sort(d,d+26,greater<int>());
    for(int i = 0 ; i < 26 ; i++){
        if(!k) break;
        if(k > d[i]){
            res += d[i] * d[i];
            k -= d[i];
        }
        else {
            res += k * k;
            k = 0; 
        }
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