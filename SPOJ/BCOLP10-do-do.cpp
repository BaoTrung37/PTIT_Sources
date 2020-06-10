//
// Code By CodeWar :3
#include <bits/stdc++.h>
#define pb push_back;
typedef long long i64;
const int mod = 1e9+7;
using namespace std;
string s;
void input(){
    
}

void solve(){
    int d[26] = {0},h[26] = {0};
    cin >> s;
    for(int i = 0 ; i < s.length() ; i++)
        d[s[i] - 'a']++;
    cin >> s;
    for(int i = 0 ; i < s.length() ; i++)
        h[s[i] - 'a']++;
    int res = 0;
    for(int i = 0 ; i < 26 ; i++){
        res += abs(h[i] - d[i]);
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