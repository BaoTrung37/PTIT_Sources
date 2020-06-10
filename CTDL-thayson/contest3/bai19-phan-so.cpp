/**
 *    authur: Bao Trung (Koi` Cute)
 * https://www.geeksforgeeks.org/greedy-algorithm-egyptian-fraction/
**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
#define all(x) (x).begin(), (x).end()
#define set_arr(a,n); int a[n+5]; for(int i=0;i<n;i++)cin>>a[i];
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;
const int mod = 1e9+7;
int tu,mau;
void findpq(ll tu,ll mau){
    if(tu == 0 || mau == 0){
        return;
    }
    if(mau % tu == 0){
        cout << "1/" << mau/tu << endl;
        return;
    }
    ll x = mau / tu + 1;
    cout << "1/" << x << " + ";
    return findpq(x * tu - mau, mau * x);
}
void solve(){
    cin >> tu >> mau;
    findpq(tu,mau);
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t = 1; cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By CodeWar :3