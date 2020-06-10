/**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;

priority_queue <int,vector <int>> q;
int n;
string s;
void solve(){
    cin >> n >> s;
    int d[26] = {0};
    for(auto x : s){
        d[x - 'A']++;
    }
    for(int i = 0 ; i < 26 ; i++){
        if(d[i] != 0){
            q.push(d[i]);
        }
    }
    while(n--){
        int x = q.top();
        q.pop();
        q.push(--x);
    }
    ll res = 0;
    while(!q.empty()){
        ll x = q.top();
        q.pop();
        res += x * x;
    }
    cout << res << '\n';
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    
    int t = 1; cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By CodeWar :3 (Bao Trung)