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
int n,a[6],x[6],vis[6],sum,OK;
void Try(int i,int sum){
    if(i == n) {
        if(sum == 23){
            OK = 1;
        }
    }
    for(int j = 1 ; j <= 3 ; j++){
        if(i < n && j == 1){
            Try(i + 1, sum + a[x[i + 1]]);
        } 
        if(i < n && j == 2){
            Try(i + 1, sum - a[x[i + 1]]);
        }  
        if(i < n && j == 3){
            Try(i + 1, sum * a[x[i + 1]]);
        }
    }
}
void Try1(int i){
    for(int j = 1 ; j <= n ; j++){
        if(vis[j]){
            vis[j] = 0;
            x[i] = j;
            if(i == n){
                Try(1,a[x[1]]);
            }  
            else   
                Try1(i + 1);
            vis[j] = 1;
        }
    }
}
void solve(){
    n = 5;
    for(int i = 1; i <= n ; i++){
        cin >> a[i];
        vis[i] = 1;
        x[i] = i;
    }
    OK = 0;
    Try1(1);
    cout << (OK ? "YES" : "NO") << endl;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t = 1; cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By CodeWar :3