/**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define ii pair<int, int>
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;

const int N = 505;
int n,m;
int a[N][N];
bool ok[N][N];
int x[] = {-1,-1,-1,0,0,1,1,1};
int y[] = {-1,0,1,-1,1,-1,0,1};
void DFS(int i,int j){
    ok[i][j] = true;
    for(int k = 0 ; k < 8 ; k++){
        int x_next = i + x[k];
        int y_next = j + y[k];
        if(x_next >= 0 && x_next < n && y_next >= 0 && y_next < m && !ok[x_next][y_next] && a[x_next][y_next] == 1)   
            DFS(x_next,y_next);
    }
}
void solve(){
    memset(ok,false,sizeof(ok));
    cin >> n >> m;
    for(int i = 0 ; i < n ; i++)
        for(int j = 0 ;j < m ; j++)
            cin >> a[i][j];
    int res = 0;
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < m ; j++){
            if(a[i][j] == 1 && !ok[i][j]){
                res++;
                DFS(i,j);
            }
        }
    }
    cout << res << '\n';
}
 

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    
    int t = 1; cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By CodeWar :3 (Bao Trung)