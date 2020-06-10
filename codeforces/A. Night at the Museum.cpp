//
// Code By CodeWar :3
#include <bits/stdc++.h>
using namespace std;
typedef long long i64;
const int mod = 1e9+7;
#define pb push_back;
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;
string s;
void solve(){
    cin >> s;
    int res = 0, pos = 0;
    for(int i = 0 ; i < s.length() ; i++){
        int x = s[i] - 'a';
        res += min(abs(x - pos) , 26 - abs(x - pos));
        pos = x;
    }
    cout << res;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t = 1; //cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By CodeWar :3