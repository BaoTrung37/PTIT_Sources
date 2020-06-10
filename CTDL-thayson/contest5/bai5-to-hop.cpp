/**
 *    authur: Bao Trung
**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;
const int mod = 1e9+7;
ll c[1002][1002];
int n,k;
void C(){
    for(int i = 0 ; i <= 1000 ; i++){
        for(int j = i ; j <= 1000 ; j++){
            if(j == i || i == 0){
                c[i][j] = 1;
            }
            else{
                c[i][j] = (c[i - 1][j - 1] + c[i][j - 1]) % mod;    
            }
            
        }
    }
}
void solve(){
    cin >> n >> k;
    cout << c[k][n] <<'\n';
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);

    C();
    int t = 1; cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By CodeWar :3