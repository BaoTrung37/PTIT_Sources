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
int n;
void solve(){
    cin >> n;
    if(n & 1) cout << 0;
    else{
        int cnt = 0;
        for(int i = 1 ; i <= sqrt(n) ; i++){
            if(n % i == 0){
                if(i % 2 == 0) cnt++;
                if(i * i != n && (n/i) % 2 == 0) cnt++;
            }
        }
        cout << cnt;
    }
    cout << '\n';
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t = 1; cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By CodeWar :3