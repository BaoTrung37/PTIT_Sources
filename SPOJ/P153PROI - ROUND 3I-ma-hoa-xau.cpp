//
// Code By CodeWar :3
#include <bits/stdc++.h>
#define pb push_back;
typedef long long i64;
typedef long i32;
const int mod = 1e9+7;
const int nMax = 1e6+5;
using namespace std;
string s;
void input(){
    getline(cin,s);
}

void solve(){
    int d[300] = {0};
    int cnt = 0;
    string res = "";
    for(int i = 0 ; i < s.length() ; i++){
        s[i] = tolower(s[i]);
        d[s[i] -'0']++;
        if(d[s[i] -'0'] == 1){
            res += s[i];
        }
    }
    for(int i = 0 ; i < 270 ; i++)
        if(d[i] > 1) cnt += d[i];
    cout << cnt << " " << res << endl;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t;
    cin.ignore();
    while(t--){
        input();
        solve();
    }
    return 0;
}

// Code By CodeWar :3   