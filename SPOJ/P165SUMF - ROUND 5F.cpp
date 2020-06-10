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
int m;
ll res;
ll check(string s){
    if(s[0] == '0')
        return 0;
    ll tmp = 0;
    for(int i = 0 ; i < s.length() ; i++)
        tmp = tmp * 10 + s[i] - '0';
    if(tmp % m == 0) return 1;
    return 0;
}
void solve(){
    cin >> s >> m;
    int n = s.length();
    sort(all(s));
    bool OK = false;
    while(next_permutation (all(s)) ){
        if(check(s)){
            res++;
        }
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