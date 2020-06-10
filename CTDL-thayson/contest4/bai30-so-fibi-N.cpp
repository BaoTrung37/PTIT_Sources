/**
 *    authur: Bao Trung (Koi` Cute)
**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
#define all(x) (x).begin(), (x).end()
#define set_arr(a,n); int a[n+5]; for(int i=0;i<n;i++)cin>>a[i];
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;
const int mod = 1e9+7;
struct Matran{
    ll c[2][2];
    Matran(){
        c[0][0] = 0;
        c[0][1] = 1;
        c[1][0] = 1;
        c[1][1] = 1;
    }
};
Matran operator* (Matran a,Matran b){
    Matran res;
    for(int i = 0 ; i <= 1 ; i++){
        for(int j = 0 ; j <= 1 ; j++){
            res.c[i][j] = 0;
            for(int k = 0 ; k <= 1 ; k++){
                res.c[i][j] = (res.c[i][j] + a.c[i][k] * b.c[k][j]) % mod; 
            }
        }
    }
    return res;
}
Matran pow2(Matran a , ll n){
    if(n == 1) return a;
    Matran kt = pow2(a,n >> 1);
    if(n % 2 == 0) return (kt * kt);
    return kt * kt * a;
}
void solve(){
    ll n;
    cin >> n;
    Matran A;
    A = pow2(A,n);
    cout << A.c[0][1] << '\n';
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t = 1; cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By CodeWar :3