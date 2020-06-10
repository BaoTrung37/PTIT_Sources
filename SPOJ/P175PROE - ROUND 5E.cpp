//
#include <bits/stdc++.h>
#define pb push_back;
typedef long long i64;
typedef long i32;
const int mod = 1e9+7;
const int Max = 1e6+5;
using namespace std;
string s;
int cnt;
string tong(string s){
    string res = "";
    int x = 0;
    for(int i = 0 ; i < s.length(); i++)
        x += s[i] - '0';
    while(x){
        res += (x % 10) +'0';
        x /= 10;
    }
    return res;
}
void solve(){
    cin >> s;
    cnt = 0;
    while(s.length() > 1){
        s = tong(s);
        cnt++;
    }
    cout << cnt << endl;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}
