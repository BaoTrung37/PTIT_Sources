/**
 *    authur: Bao Trung
**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;

int n,x,y,z;
int dp[1000];
void solve(){
    cin >> n >> x >> y >> z;       // insert  delete copy
    memset(dp,0,sizeof(dp));
    dp[1] = x;
    for(int i = 1 ; i <= n ; i++){
        if(i % 2 == 0){             // số chẵn kiếm tra insert mà n / 2 + copy
            dp[i] = min(dp[i - 1] + x , dp[i / 2] + z);
        }
        else{
            dp[i] = min(dp[i - 1] + x , dp[i / 2 + 1] + z + y); // số lẻ thì kiểm tra insert và n / 2 + 1 + copy - delete
        }
    }
    cout << dp[n] << '\n';
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    
    int t = 1; cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By CodeWar :3