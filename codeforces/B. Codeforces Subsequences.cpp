/**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define ii pair<int, int>
#define X first
#define Y second
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;
const int N = 1e5 + 5;

ll k;
void solve(){
    cin >> k;
    string s = "codeforces";
    int n = (int)s.length();
    vector <ll> a(n,1);
    ll tmp = 1;
    for(int i = 0 ; tmp < k ; i = (i + 1) % n){
        tmp = tmp / a[i] * (a[i] + 1);
        ++a[i];
    }
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < a[i] ; j++){
            cout << s[i];
        }
    }
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    
    int t = 1; //cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By CodeWar :3 (Bao Trung)