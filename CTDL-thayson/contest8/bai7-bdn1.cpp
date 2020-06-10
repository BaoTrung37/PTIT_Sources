/**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;

ll n;
void solve(){
    cin >> n;
    queue <ll> q;
    q.push(1);
    int res = 0;
    while(1){
        ll tmp = q.front();q.pop();
        if(tmp > n){
            cout << res << '\n';
            return;
        }
        res++;
        q.push(tmp * 10); q.push(tmp*10 + 1);
    }
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    
    int t = 1; cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By CodeWar :3 (Bao Trung)