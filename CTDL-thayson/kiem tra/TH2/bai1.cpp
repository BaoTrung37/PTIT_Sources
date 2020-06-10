/**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define ii pair<int, int>
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;

int n;
void solve(){
    cin >> n;
    queue <ll> q;
    q.push(6);
    q.push(8);
    int k =  2 * (n * (n + 1) / 2);
    while(k--){
        ll s = q.front(); q.pop();
        cout << s << ' ';
        q.push(s * 10 + 6); q.push(s * 10 + 8);
    }
    cout << '\n';
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    
    int t = 1; cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By CodeWar :3 (Bao Trung)