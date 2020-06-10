/**
 *    authur: Bao Trung (Koi Cute)
**/
#include <bits/stdc++.h>
using namespace std;
typedef long long i64;
const int mod = 1e9+7;
#define pb push_back;
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;
string s;
i64 k;
char Try(string s, i64 n){
    i64 len = s.length();
    if(n < len){
        return s[n];
    }
    while(2 * len <= n)
        len *= 2;
    if(len == n)
        return Try(s, len - 1);
    return Try(s, n - len -1);
}
void solve(){
    cin >> s >> k;
    cout << Try(s,k - 1);
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t = 1;// cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By CodeWar :3in