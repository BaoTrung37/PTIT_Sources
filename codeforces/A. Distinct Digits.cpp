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
int l,r;
bool check(int n){
    int d[10] = {0};
    while(n > 0){
        if(d[n % 10]) return false;
        d[n % 10]++; n/= 10;
    }
}
void solve(){
    cin >> l >> r;
    for(int i = l ; i <= r; i++){
        if(check(i)){
            cout << i;
            return;
        }
    }
    cout << -1;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t = 1; //cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By CodeWar :3