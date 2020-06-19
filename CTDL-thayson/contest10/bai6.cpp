/**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define ii pair<int, int>
#define X first
#define Y second
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;
const int N = 1e5 + 5;
int n,m,nmax;

class dfu{
    private:
        vector <int>parent,rank,setSizes;
        int numSets;
    public:
        dfu(int N){
            rank.assign(N,0);
            parent.assign(N,0);
            for(int i = 0 ; i < N ; i++) parent[i] = i;
            setSizes.assign(N,1);
        }
        int findSet(int i){
            return(parent[i] == i) ? i :  parent[i] = findSet(parent[i]);
        }
        int isSameSet(int i,int j){
            return findSet(i) == findSet(j);
        }
        void uninonSet(int i,int j){
            if(!isSameSet(i,j)){
                int x = findSet(i);
                int y = findSet(j);
                if(rank[x] > rank[y]){
                    setSizes[findSet(x)] += setSizes[findSet(y)];
                    parent[y] = x;
                }
                else{
                    setSizes[findSet(y)] += setSizes[findSet(x)];
                    parent[x] = y;
                    if(rank[x] == rank[y])
                        rank[y]++;
                }
                numSets--;
            }
        }
        int setSize(int i){
            return setSizes[findSet(i)];
        }
        int numDisjointSets(){
            return numSets;
        }
};

void solve(){
    cin >> n >> m;
    dfu uf(n);
    nmax = 1;
    for(int i = 0,u,v; i < m ; i++){
        cin >> u >> v; --u;--v;
        uf.uninonSet(u,v);
        if(uf.setSize(u) > nmax)
            nmax = uf.setSize(u);
    }
    cout << nmax << '\n';
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    
    int t = 1; cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By CodeWar :3 (Bao Trung)