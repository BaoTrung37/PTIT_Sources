/**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define ii pair<int, int>
#define X first
#define Y second
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;
const int INF = 1e9 + 5;
const int N = 1e3 + 5;
int n,m;
int a[N][N];

void Check_CT_Am(){
    int d[n+1];
    for(int i = 0 ; i <= n ; i++)
        d[i] = INF;
    // u = 1
    d[1] = 0;
    for(int k = 1; k < n ; k++){
        for(int i = 1 ; i <= n ; i++){
            for(int j = 1 ; j <= n ; j++){
                if(d[j] > d[i] + a[i][j]){
                    d[j] = d[i] + a[i][j];
                }
            }
        }
    }
    int Ok = 0;
    for(int i = 1 ; i <= n ; i++){
        for(int j = 1 ; j <= n ; j++){
            int tmp = d[i] + a[i][j];
            if(d[j] > tmp){
                Ok = 1;
                break;
            }
        }
    }
    cout << Ok << '\n';
}

void solve(){
    cin >> n >> m;
    for(int i = 1 ; i <= n ; i++)
        for(int j = 1 ; j <= n ; j ++)
            a[i][j] = INF;
    for(int i = 0,x,y,z ; i < m ; i++){
        cin >> x >> y >> z;
        a[x][y] = z;
    }    
    Check_CT_Am();
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    
    int t = 1; cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By CodeWar :3 (Bao Trung)