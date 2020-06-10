/*author : mdp*/
#include<bits/stdc++.h>
using namespace std;
#define ONLINE_JUDGE "ONLINE_JUDGE"
#define setIO() ios::sync_with_stdio(false); cin.tie(0);
#define all(a) a.begin(),a.end()
#define fill(x,b) memset((x),b,sizeof((x)))
#define fill2D(x,r,c,b) memset((x),b, sizeof(x[0][0]) * r * c)
typedef long long ll;
typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<string> vs;
typedef vector<ii> vpii;
int test = 1 , MULTI_TEST = 1;
int dx[] = {0,-1,-1,-1,0,1,1,1};
int dy[]= {1,1,0,-1,-1,-1,0,1};
char mp[100][100];
int vis[100][100] = {0};
int k,m,n;
vector < string > a;
vector < string > res;
bool inside(int u , int v){
    return ( 1 <= u && u <= n && 1 <= v && v <= m);
}

void DFS(int x , int y , string s){
    vis[x][y] = 1;
    s.push_back(mp[x][y]);
    for(int i = 0 ; i < a.size() ; i++){
        if(s == a[i]){
            res.push_back(s);
            break;
        }
    }
    for(int i = 0 ; i < 8 ; i++){
        int u = x + dx[i];
        int v = y + dy[i];
        if( inside(u,v) && vis[u][v] == 0) 
            DFS(u,v,s);
    }
    s.pop_back();
    vis[x][y] = 0;
}
void Input(){
    cin >> k >> m >> n;
    a.resize(k); res.clear();
    for(int i = 0 ; i < k ; i++)
        cin >> a[i];

    for(int i =  1 ; i <= n ; i++){
        for(int j = 1 ; j <= m ; j++){
            vis[i][j] = 0;
            cin >> mp[i][j];
        }
    }
}  
void Solve(){
    string tmp = "";
    for(int i =  1 ; i <= n ; i++){
        for(int j = 1 ; j <= m ; j++){
            DFS(i,j,tmp);   
        }
    }
    if ( res.size() == 0 ){
        cout << -1 << '\n';
        return;
    }
    for(auto x : res) cout << x << ' ';
    cout << '\n';
}
int main(){
    setIO();
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    if(MULTI_TEST == 1) cin >> test;
    for(int i = 1 ; i <= test ; i++){Input(); Solve();}
    return 0;
}

 