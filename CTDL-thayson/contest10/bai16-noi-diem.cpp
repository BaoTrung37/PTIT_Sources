/**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pdd pair<double,double>
#define X first
#define Y second
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;
const int N = 1e5 + 5;

struct edeg{
    int u,v; // toạ độ u,v
    double w; // trọng số
};

int n;
vector <pdd> a;
vector <edeg> b;
// disjohnset
struct dsu{
    vector <int> parent,rank;
    int n;
    dsu(int m){
        n = m; parent.resize(n + 1); rank.assign(n + 1, 0);
    }
    void in(){
        for(int i = 0 ; i <= n ; i++){
            parent[i] = i;
        }
    }
    int findSet(int i){
        return(parent[i] == i) ? i : parent[i] = findSet(parent[i]);
    }
    // bool isSame(int i,int j){
    //     return findSet(i) == findSet(j);
    // }
    bool unionSet(int i,int j){
        int x = findSet(i);
        int y = findSet(j);
        if (x == y) return false;
        if(rank[x] == rank[y]) rank[x]++;
        if(rank[x] > rank[y]) parent[y] = x;
        else parent[x] = y;
        return true;
    }
};

// tính độ dài các điểm
double range(pdd a , pdd b){
    double x = a.first - b.first;
    double y = a.second - b.second;
    return sqrt(x*x + y*y);
}

dsu DSU = dsu(0);

void input(){
    cin >> n;
    a.resize(n);
    DSU = dsu(n); DSU.in();b.clear();
    for(auto &x : a)
        cin >> x.first >> x.second;
}
void solve(){
    for(int i = 0 ; i < n - 1 ; i ++){
        for(int j = i + 1 ; j < n ; j++){
            edeg tmp;
            tmp.u = i + 1; tmp.v = j + 1;
            tmp.w = range(a[i],a[j]);
            b.push_back(tmp);
        }
    }
    auto cmp = [](edeg a,edeg b){return a.w < b.w;};
    sort(all(b),cmp);
    double res = 0;
    for(auto z : b){
        if(DSU.unionSet(z.u,z.v))
            res += z.w;
    }
    printf("%.6lf\n",res);
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    
    int t = 1; cin >> t;
    while(t--){input();solve();}
    return 0;
}

// Code By CodeWar :3 (Bao Trung)