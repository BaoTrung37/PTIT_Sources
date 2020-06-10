//
// Code By CodeWar :3
#include <bits/stdc++.h>
using namespace std;
typedef long long i64;
const int mod = 1e9+7;
#define pb push_back;
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;
int n,a,b,c,res = 0;
void solve(){
    cin >> n >> a >> b >> c;
    for(int i = 0 ; i <= n ; i++){
        for(int j = 0 ; j <= n ; j++){
            if(n - i * a - j * b >= 0 && (n - i * a - j * b) % c == 0){
                res = max ( res , i + j + (n - i * a - j * b) / c); 
            }
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