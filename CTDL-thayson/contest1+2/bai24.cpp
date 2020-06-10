/**
 *    authur: Bao Trung (Koi Cute)
**/
#include <bits/stdc++.h>
using namespace std;
typedef long long i64;
const int mod = 1e9+7;
#define pb push_back;
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;
int n,x[100],a[100],k,flag;
vector <vector <int> > res;
void result(){
    int s = 0;
    for(int i = 0; i < n ; i++)
        s += x[i]* a[i];
    if(s == k){
        vector <int> v;
        for(int i = 0 ; i < n ;i++)
            if(x[i]){
                v.push_back(a[i]);
            }
        res.push_back(v);
    }
}
void Try(int i){
    for(int j = 0 ; j <= 1 ; j++){
        x[i] = j;
        if(i == n - 1) result();
        else Try(i + 1);
    }
}
void solve(){
    cin >> n >> k;
    res.clear();
    for(int i = 0 ; i < n ; i++){
        cin >> a[i];
    }
    sort(a , a + n);
    Try(0);
    if(res.size() == 0) cout << -1 << '\n';
    else {
        sort(all(res));
        for(int i = 0 ; i < res.size() ; i++){
            cout << "[";
            for(int j = 0 ; j < res[i].size() ; j++){
                cout << res[i][j];
                if(j < res[i].size() - 1) cout << ' ';
            }
            cout << "] ";
        }
        cout << "\n";
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t = 1; cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By CodeWar :3