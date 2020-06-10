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
    cin >> s;
}

void solve(){
    string res ="";
    if(s[0] == '9'){
        res += s[0];
        for(int i = 1 ; i < s.length() ; i++){
            if(s[i] - 48 > 4){
                s[i] = (9 - (s[i] - 48)) + 48;
                res += s[i];
            }
            else res += s[i];
        }
        cout << res;
    }
    else{
       for(int i = 0 ; i < s.length() ; i++){
            if(s[i] - 48 > 4){
                s[i] = (9 - (s[i] - 48)) + 48;
                res += s[i];
            }
            else res += s[i];
        }
        cout << res;
    }
    cout << endl;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t--){
        input();
        solve();
    }
    return 0;
}

// Code By CodeWar :3