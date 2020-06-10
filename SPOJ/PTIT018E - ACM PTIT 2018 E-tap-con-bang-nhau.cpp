/**
 *    authur: Bao Trung
**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;

int n,a[30],x[30],flag;
ll s;
void result(){
    ll res = 0;
    for(int i = 1; i <= n ; i++)
        res += a[i] * x[i];
    if (res == s) flag = 1;
}
void Try(int i){
    for(int j = 0 ; j <= 1 ; j++){
        a[i] = j;
        if(i == n){
            result();
        }
        else
            Try(i + 1);
    }
}
void solve(){
    cin >> n;
    s = 0,flag = 0;
    for(int i = 1; i <= n ; i++)
        cin >> x[i] , s += x[i];
    if(s & 1){
        cout << "NO\n";
    }
    else{
        s /= 2;
        Try(1);
        if(flag) cout << "YES\n";
        else cout << "NO\n";
    }
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    
    int t = 1; cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By CodeWar :3