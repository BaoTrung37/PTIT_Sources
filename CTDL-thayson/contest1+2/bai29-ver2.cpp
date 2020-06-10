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
int n,m,a[100][100];
ll total(int n,int m){
    if(n == 1 || m == 1)
        return 1;
    return total(n - 1,m) + total(n , m - 1);
}
void solve(){
    cin >> n >> m;
    for(int i = 1; i <= n ; i++){
        for(int j = 1; i <= m ; j++){
            cin >> a[i][j];
        }
    }
    cout << total (n,m) << '\n';   
    // for(int i = 1 ; i <= 7 ; i++)
    //     for(int j = 1 ; j <= 7 ; j++)
    //         cout << total(i,j) << (j == 7 ? '\n' : ' ');
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t = 1; //cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By CodeWar :3