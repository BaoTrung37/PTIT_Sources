/**
 *    authur: Bao Trung (Koi` Cute)
**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
#define all(x) (x).begin(), (x).end()
#define set_arr(a,n); int a[n+5]; for(int i=0;i<n;i++)cin>>a[i];
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;
const int mod = 1e9+7;
string s;

void solve(){
    cin >> s;
    string res = "";
    for(int i = s.length() - 1 ; i >= 0 ; i--){
        res = s[i] + res;
        if((s.length() - i) % 3 == 0){
            res = ',' + res;
        }
    }
    if(res[0] == ',') res.erase(0,1);
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