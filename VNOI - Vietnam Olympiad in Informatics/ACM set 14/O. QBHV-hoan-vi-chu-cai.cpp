/**
 *    authur: Bao Trung <3
**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;
const int mod = 1e9+7;
string s;
void solve(){
    cin >> s;
    sort(all(s));
    vector <string> res;
    res.push_back(s);
    while(next_permutation(all(s))) res.push_back(s);
    cout << res.size () << '\n';
    for(auto x : res) cout << x << '\n';
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t = 1; //cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By CodeWar :3