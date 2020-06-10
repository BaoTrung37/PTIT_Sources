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
    int i= 0,cnt4 = 0,cnt7 = 0,min = 99999999;
    bool OK = 0;
    while(i * 7 <= n){
        if((n - i * 7 ) % 4 == 0){
            OK = 1;
            if(i + (n - i * 7) / 4 < min){
                cnt7 = i;
                cnt4 = (n - i * 7) / 4;
                min = cnt7 + cnt4;
            }
        }
        i++;
    }
    if(OK){
        while(cnt4--) cout << 4;
        while(cnt7--) cout << 7;
    }
    else cout << -1;
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