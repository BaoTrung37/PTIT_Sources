//https://www.geeksforgeeks.org/gray-to-binary-and-binary-to-gray-conversion/
// Code By CodeWar :3
#include <bits/stdc++.h>
using namespace std;
typedef long long i64;
const int mod = 1e9+7;
#define pb push_back;
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;
string s;
char flip(char c) { return (c == '0') ? '1' : '0'; }
void solve(){
    cin >> s;
    string bina = "";
    bina += s[0];
    for(int i = 1 ; i < s.length() ; i++){
        if(s[i] == '0'){
            bina += bina[i -1];
        }
        else
            bina += flip(bina[i - 1]);
    }
    cout << bina << endl;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t = 1; cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By CodeWar :3