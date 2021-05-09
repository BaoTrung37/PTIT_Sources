/**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define ii pair<int, int>
#define X first
#define Y second
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;
const int N = 1e3 + 5;

int n,m;
int a[N][N];
int dx[] = {1,-1,0,0};
int dy[] = {0,0,-1,1};
bool check(int x,int y){
    return (x > 0 && x <= n && y > 0 && y <= m);
}
void solve(){
    cin >> n >> m;
    for(int i = 1 ; i <= n ; i++)
        for(int j  = 1 ; j <= m ; j++)
            cin >> a[i][j];
    for(int i = 1 ; i <= n ; i++){
        for(int j = 1 ; j <= m ; j++){
            int cnt = 0;
            for(int k = 0 ; k < 4 ; k++){
                if(check(i + dx[k] , j + dy[k])){
                    cnt++;
                }
            }
            if(cnt < a[i][j]){
                cout << "NO\n";
                return;
            }
            else{
                a[i][j] = cnt;
            }
        }
    }
    cout << "YES\n";
    for(int i = 1; i <= n; i++){
        for(int j = 1 ; j <= m ; j++){
            cout << a[i][j] << ' ';
        }
        cout << '\n';
    }
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    
    int t = 1; cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By CodeWar :3 (Bao Trung)