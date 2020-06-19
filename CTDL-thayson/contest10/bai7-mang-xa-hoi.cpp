/**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define ii pair<int, int>
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;
const int Nmax = 100004;

// mảng cl để chia nhóm, sl là số lượng bạn trong nhóm 
int n,m,sl[Nmax],d[Nmax],cl[Nmax];
queue <int> q;
stack <int> st[Nmax];

void BFS(int x){
    q.push(x);
    while(!q.empty()){
        int u = q.front(); q.pop();
        while(!st[u].empty()){
            int v = st[u].top(); st[u].pop();
            if(cl[v] == 0){
                cl[v] = cl[u];
                q.push(v);
            }
        }
    }
}

void solve(){
    cin >> n >> m;
    memset(sl,0,sizeof(sl));
    memset(d,0,sizeof(d));
    memset(cl,0,sizeof(cl));

    for(int i= 0,x,y; i < m ; i++){
        cin >> x >> y;
        st[x].push(y);
        st[y].push(x);
        d[x]++;
        d[y]++;
    }
    // nhóm bạn và cờ đánh dấu
    // team dùng để phân biệt các nhóm
    int team = 0,flag = 0;
    for(int i = 1 ; i <= n ; i++){
        if(cl[i] == 0){
            cl[i] = ++ team;
            BFS(i);
        }
    }
    // số lượng bạn trong từng team
    for(int i = 1; i <= n ; i++){
        sl[cl[i]]++;
    }
    /* debug
    for(int i = 1 ; i <= n ; i++)
        cout << cl[i] << '\n';
    for(int i = 1; i <= n ; i++){
        cout << "sl "<< i << " : " <<sl[cl[i]] << " -- ";
        cout << "d " << i << " : " << d[i] << '\n';
    }
    cout << '\n';
    */
    for(int i = 1; i <= n ; i++){
        if(d[i] != sl[cl[i]] - 1){
            flag = 1;
            break;
        }
    }
    cout << (flag == 1 ? "NO" : "YES") << '\n';
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    
    int t = 1; cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By CodeWar :3 (Bao Trung)