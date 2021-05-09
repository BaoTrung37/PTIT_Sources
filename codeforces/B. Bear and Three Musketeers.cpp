/**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define ii pair<int, int>
#define X first
#define Y second
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<int>a(n); for(int i=0;i<n;i++)cin>>a[i];
#define db(x) cerr << #x << " = "  << (x) << ' ';
const int N = 10005;

int n,m,Min = (int)(1e9);
vector <int> edge;
bool vis[N][N];
void solve(){
    cin >> n >> m;
    edge.resize(n + 1);
    memset(vis,false,sizeof(vis));
    for(int i = 0 ; i < m ; i++){
        int u,v;
        cin >> u >> v; 
        vis[u][v] = vis[v][u] = true;
        edge[u]++;
        edge[v]++;
    }
    for(int i = 1 ; i <= n ; i++){
        for(int j = i + 1 ; j <= n ; j++){
            if(vis[i][j]){
                for(int k = j + 1 ; k <= n ; k++){
                    if(vis[i][k] && vis[j][k]){
                        Min = min(Min,edge[i] + edge[j] + edge[k]);
                    }
                }
            }
        }
    }
    cout << (Min == 1e9 ? -1 : Min - 6);
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    
    int t = 1; //cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By Pain (Bao Trung)