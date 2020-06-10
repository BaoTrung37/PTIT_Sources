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
    if(s[0] != '-'){
        cout << s;
        return;
    }
    int len = s.length();
    if(len == 3 && s[2] =='0'){
            cout << "0";
            return;
    }
    if(s[len - 1] <= s[len -2]){
        for(int i = 0 ; i < len - 2 ; i++)
            cout << s[i];
    }
    else{
        for(int i = 0 ; i < len - 1 ; i++)
            cout << s[i];
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