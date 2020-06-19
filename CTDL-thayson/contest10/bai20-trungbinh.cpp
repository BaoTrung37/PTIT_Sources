/*
    sử dụng floy để tính khoảng cách ngắn nhất từ 1 đỉnh
    đến các đỉnh còn lại
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define ii pair<int, int>
#define X first
#define Y second
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;
const int N = 1e2 + 5;
const int inf = 1e6 + 5;

int n,m;
int a[N][N];
int dp[N][N];

void Floy(){
    for(int i = 1 ; i <= n ; i++){
        for(int j = 1 ; j <= n ; j++){
            if(i == j) dp[i][j] = 0;
            else{
                if(a[i][j] == 0)
                    dp[i][j] = inf;
                else
                    dp[i][j] = a[i][j];
            }
        }
    }
    for(int k = 1 ; k <= n ; k++){
        for(int i = 1 ; i <= n ; i++){
            for(int j = 1 ; j <= n ; j++){
                if(dp[i][j] > dp[i][k] + dp[k][j])
                    dp[i][j] = dp[i][k] + dp[k][j];
            }
        }
    }
    // thêm mỗi cái này :v
    
    int cnt = 0;
    double res = 0;
    for(int i = 1 ; i <= n ; i++){
        for(int j = 1 ; j <= n ; j++){
            if(i == j) continue;
            if(dp[i][j] != inf){
                cnt++;
                res += dp[i][j];
            }
            //cout << dp[i][j] << ' ';
        }
        //cout << '\n';
    }
    printf("%.2lf\n",res / cnt);
}

void solve(){
    cin >> n >> m;
    memset(a,0,sizeof(a));
    for(int i = 1,x,y ; i <= m ; i++){
        cin >> x >> y;
        a[x][y] = 1;
    }
    Floy();
}


int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    
    int t = 1; cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By CodeWar :3 (Bao Trung)