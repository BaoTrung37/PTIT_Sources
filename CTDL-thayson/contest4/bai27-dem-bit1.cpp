/**
 *    authur: Bao Trung (Koi` Cute)
**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;
const int mod = 1e9+7;
ll N , L , R;
ll len(ll n){ // độ dài khi biến đổi xâu [n\2], n % 2 ,[n \ 2];
    if(n == 0 || n == 1)
        return 1;
    ll tmp = len(n/2);
    return 2*tmp + 1;
}
ll demso1(ll n, ll l,ll r){
    if(l > R || r < L)              // kiểm tra l,r phạm vi L R 
        return 0;
    if(L <= l && r <= R)            
        return n;
    ll mid = (l + r) / 2;
    if(L <= mid &&  mid <= R) 
        return demso1(n / 2, l , mid - 1) + demso1(n / 2 , mid + 1,r) + n % 2;
    return demso1(n / 2, l , mid - 1) + demso1(n / 2 , mid + 1,r);
}
void solve(){
    cin >> N >> L >> R;
    ll dodai = len(N);
    cout << demso1(N,1,dodai) << endl;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t = 1; cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By CodeWar :3