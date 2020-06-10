/**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define ii pair<int, int>
#define pai pair<ar<int,3>,int>
#define ar array
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;

char m[51][51][51];
int vis[51][51][51];
int a,b,c,xd,yd,zd,xc,yc,zc;
int dx[] = {0,0,1,-1,0,0};
int dy[] = {1,-1,0,0,0,0};
int dz[] = {0,0,0,0,1,-1};
bool inside(int x,int y,int z){
    return(1 <= x && x <= a && 1 <= y && y <= b && 1 <= z && z <= c);
}
void solve(){
    cin >> a >> b >> c;
    for(int i = 1; i <= a; i++){
        for(int j = 1; j <= b; j++){
            for(int k = 1; k <= c; k++){
                cin >> m[i][j][k];
                vis[i][j][k] = 0;
                if(m[i][j][k] == 'S'){
                    xd = i;
                    yd = j;
                    zd = k;
                }
                if(m[i][j][k] == 'E'){
                    xc = i;
                    yc = j;
                    zc = k;
                }
            }
        }
    }

    queue<pair<tuple<int,int,int>,int>>q;
    q.push({make_tuple(xd,yd,zd),0});
    vis[xd][yd][zd] = 1;
    int mincost = 1e9;
    while(!q.empty()){
        tuple<int,int,int> topq = q.front().first;
        int u = get<0>(topq);
        int v = get<1>(topq);
        int w = get<2>(topq);
        int c = q.front().second;
        q.pop();
        if(u == xc && v == yc && w == zc){
            
            mincost = min(mincost,c);
            continue;
        }
        for(int i = 0; i < 6; i++){
            int x = u + dx[i];
            int y = v + dy[i];
            int z = w + dz[i];
            if(inside(x,y,z) && m[x][y][z] != '#' && vis[x][y][z] == 0){
                vis[x][y][z] = 1;
                q.push({make_tuple(x,y,z),c+1});
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