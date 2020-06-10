//https://www.spoj.com/PTIT/problems/P191PROC/
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
    char tmp[2];
    tmp[0] = s[0];
    for(int i = 0 ; i < s.length() - 1 ; i++){
        if(s[i] != ' ' && s[i+1] != ' ')
            s[i] = s[i+1];
        else if(s[i] != ' ' && s[i+ 1] ==' ')
            s[i] = s[i+2];
    }
    s[s.length() - 1] = tmp[0] + 32;
    s[0] = toupper(s[0]);
    cout << s << "ee" << endl;
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