/**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define ii pair<int, int>
#define X first
#define Y second
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;
const int nmax = 10005;

int n;
void solve(){
    cin >> n;
    set_vect(a,n);
    vector <int> b(n);
    iota(all(b),0);
    sort(all(b),[&](int i,int j){
        if(a[i] != a[j])
            return a[i] < a[j];
        return i < j;
    });
    vector <ii> res;
    for(int j = 0 ; j < n ; j++){
        for(int i = 0 ; i < n - 1; i++){
            if(b[i] > b[i + 1]){
                res.emplace_back(b[i + 1],b[i]);
                swap(b[i],b[i + 1]);
            }
        }
    }
    cout << res.size() << '\n';
    for(auto x : res){
        cout << x.first + 1 << ' ' << x.second + 1 << '\n';
    }
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    
    int t = 1; //cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By CodeWar :3 (Bao Trung)