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
ll F[100];
void Fibo(){
    F[1] = 1;
    F[2] = 1;
    for(int i = 3 ; i < 93 ; i++)
        F[i] = F[i - 1] + F[i -2];
}
char Try(int n,ll k){
    if(n == 1) return 'A';
    if(n == 2) return 'B';
    if(k <= F[n - 2]) return Try(n - 2,k);
    return Try(n - 1, k - F[n - 2]);
}
void solve(){
    int n;
    ll k;
    cin >> n >> k;
    cout << Try(n,k) << '\n';
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t = 1; cin >> t;
    Fibo();
    while(t--){solve();}
    return 0;
}

// Code By CodeWar :3