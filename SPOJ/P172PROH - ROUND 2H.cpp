//
// Code By CodeWar :3
#include <bits/stdc++.h>
#define pb push_back;
typedef long long i64;
const int mod = 1e9+7;
using namespace std;
string s;
void input(){
    cin >> s;
}

void solve(){
    int cnt = 0;
    for(int i = 0 ; i < s.length() ;i++){
        if(s[i] == 'c' && (s[i + 1] == '=' || s[i+1] == '-')){
            cnt++;
            i += 2;
        }
        else if (s[i] == 'd' && s[i+1] == 'z' && s[i+2] == '='){
            cnt+=2;
            i += 3;
        }
        else if(s[i] == 'd' && s[i+1] == '-'){
            cnt++;
            i += 2;
        }
        else if((s[i] == 'l' || s[i] == 'n' )&& s[i+1] == 'j'){
            cnt+=2;
            i += 2;
        }
        else if((s[i] == 's' || s[i] == 'z') && s[i+1] == '='){
            cnt++;
            i += 2;
        }
        else{
            cnt++;
        }
    }
    cout << cnt ;
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