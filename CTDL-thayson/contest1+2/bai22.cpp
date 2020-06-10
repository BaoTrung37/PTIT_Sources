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
int n,a[12][12],vis[12][12];
string s;
vector <string> v;
bool check(int i,int j){
    if(i >= 0 && i < n  && j >= 0 && j < n)
        return true;
    return false;
}
void Try(int i,int j){
    vis[i][j] = 0;
    if(i == n - 1 && j == n - 1)
        v.push_back(s);
    if(a[i + 1][j] && check(i + 1, j) && vis[i + 1][j]){
        s += "D";
        Try(i + 1, j);
        s.pop_back();
        vis[i + 1][j] = 1;
    }
    if(a[i][j + 1] && check(i , j + 1) && vis[i][j + 1]){
        s += "R";
        Try(i, j + 1);
        s.pop_back();
        vis[i][j + 1] = 1;
    }
}
void solve(){
    cin >> n;
    v.clear();
    s.clear();
    for(int i = 0; i < n ; i++)
        for(int j = 0; j < n ; j ++){
            cin >> a[i][j];
            vis[i][j] = a[i][j];
        }   
    Try(0,0);
    if(v.size() == 0 || a[0][0] == 0){
        cout << -1 << endl;
        return;
    }
    sort(all(v));
    for(int i = 0 ; i < v.size() ;i++)
        cout << v[i] << ' ';
    cout << endl;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t = 1; cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By CodeWar :3