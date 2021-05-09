/*

*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;

int n,a[1000000],ans;

void solve(){
    cin >> n;
    for(int i = 1 ; i <= n ; i++)
        cin >> a[i];
    vector <int> pos(n + 1),res(n + 1);
    for(int i = 1 ; i <= n ; i++){
        if(!pos[i]){
            vector <int> cur;
            ans = 0;
            while(!pos[i]){
                cur.push_back(i);
                pos[i] = true;
                i = a[i];
                ans++;
            }
            for(int x : cur) res[x] = ans; 
        }
    }
    for(int i = 1 ; i <= n ; i++) cout << res[i] << ' ';
    cout << '\n';  
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    
    int t = 1; cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By CodeWar :3 (Bao Trung)