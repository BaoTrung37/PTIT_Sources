/**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define ii pair<int, int>
#define pti pair<tuple<int,int,int>,int>
#define ar array
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;
const int N = 55;
int x,y,z;
char a[N][N][N];
bool vis[N][N][N];
int c1,c2,c3,d1,d2,d3;

int dx[] = {0,0,1,-1,0,0};
int dy[] = {1,-1,0,0,0,0};
int dz[] = {0,0,0,0,1,-1};

bool inside(int a,int b,int c){
    return(0 <= a && a < x && 0 <= b && b < y && 0 <= z && c < z);
}


void solve(){
    memset(vis,false,sizeof(vis));
    cin >> x >> y >> z;
    for(int i = 0 ; i < x ; i++){
        for(int j = 0 ; j < y ; j++)
            for(int k = 0 ; k < z ; k++){
                cin >> a[i][j][k];
                if(a[i][j][k] == 'S'){
                    c1 = i;
                    c2 = j;
                    c3 = k;
                }
                if(a[i][j][k] == 'E'){
                    d1 = i;
                    d2 = j;
                    d3 = k;
                }
            } 
    }
    //
    queue <pti> q;
    q.push({make_tuple(c1,c2,c3) , 0});
    vis[c1][c2][c3] = true;
    int mincost = 1e9;
    while(!q.empty()){
        tuple <int,int,int> s = q.front().first;
        int xx = get<0>(s);
        int yy = get<1>(s);
        int zz = get<2>(s);
        int cnt = q.front().second;
        q.pop();
        if(xx == d1 && yy == d2 && zz == d3){
            mincost = min(mincost,cnt);
            continue;
        }
        for(int i = 0; i < 6; i++){
            int u = xx + dx[i];
            int v = yy + dy[i];
            int w = zz + dz[i];
            if(inside(u,v,w) && a[u][v][w] != '#' && vis[u][v][w] == false){
                vis[u][v][w] = true;
                q.push({make_tuple(u,v,w),cnt + 1});
            }
        }
    }
    cout << ((mincost == 1e9)?-1:mincost) << '\n';
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    
    int t = 1; cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By CodeWar :3 (Bao Trung)