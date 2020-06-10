/**
 *    authur: Bao Trung <3
 * 
**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;
const int mod = 1e9+7;
string s,x,z;
int n,m,q;
int res[102][102][102];
void solve(){
    cin >> n >> m >> q ;
    cin >> s;
    cin >> x;
    cin >> z;
    for(int i = 1 ; i <= n ; i++){
        for(int j = 1 ; j <= m ; j++){
            for(int k = 1; k <= q; k++){
                if(i == 1 && j == 1 && k == 1)
                    res[i][j][k] = 0;
                else if(s[i - 1] == x[j - 1] && x[j - 1] == z[k - 1]){
                    res[i][j][k] = res[i - 1][j - 1][k - 1] + 1;
                }
                else{
                    res[i][j][k] = max( max(res[i - 1][j][k] , res[i][j - 1][k]) , res[i][j][k - 1]);
                }
            }
        }
    }
    cout << res[n][m][q] << '\n';
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t = 1; cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By CodeWar :3