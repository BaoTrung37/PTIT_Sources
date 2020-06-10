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
int n,k;
struct Matran{
    ll c[11][11];
};
Matran operator* (Matran a,Matran b){
    Matran res;
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            res.c[i][j] = 0;
            for(int k = 0 ; k < n ; k++){
                res.c[i][j] = (res.c[i][j] + a.c[i][k] * b.c[k][j]) % mod; 
            }
        }
    }
    return res;
}
Matran pow2(Matran a , ll n){
    if(n == 1) return a;
    Matran kt = pow2(a , n >> 1);
    if(n % 2 == 0) return (kt * kt);
    return kt * kt * a;
}
void solve(){
    Matran A;
    cin >> n >> k;
    for(int i = 0 ; i < n ; i++)
        for(int j = 0 ; j < n ; j++)
            cin >> A.c[i][j];
    A = pow2(A,k);
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            cout << A.c[i][j] << ' ';
        }
        cout << '\n';
    }
        
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t = 1; cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By CodeWar :3