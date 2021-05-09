//
// Code By CodeWar :3
#include <bits/stdc++.h>
#define pb push_back;
#define all(x) (x).begin(), (x).end()
typedef long long i64;
const int mod = 1e9+7;
using namespace std;
string s,x;
int n;
void solve(){
    cin >> n >> s >> x;
    int res = 0;
    for(int i = 0 ; i < s.length() ; i++){
        int a = s[i] - '0';
        int b = x[i] - '0';
        if(a > b) swap(a,b);
        res += min(a + 10 - b, abs(b - a));
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