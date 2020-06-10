/**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;
#define pii pair<int,int>

int n;
int process(int n){
    set <int> vis;
    queue <pii> q;
    vis.insert(n);
    q.push({n,0});
    while(!q.empty()){
        pii s = q.front(); q.pop();
        if(s.first == 1) 
            return s.second;
        if(s.first - 1 == 1)
            return s.second + 1;
        if(vis.find(s.first - 1) == vis.end()){
            vis.insert(s.first - 1);
            q.push({s.first - 1, s.second + 1});
        }
        for(int i = 2 ; i * i <= s.first ; i++){
            if(s.first % i == 0){
                if(vis.find(s.first / i) == vis.end()){
                    q.push({s.first / i, s.second + 1});
                    vis.insert(s.first / i);
                }
            }
        }
    }
}
void solve(){
    cin >> n;
    cout << process(n) << '\n';
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    
    int t = 1; cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By CodeWar :3 (Bao Trung)