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

int n,a[nmax];
int res[nmax];
void result(){
    for(int i = 1 ; i <= n ; i++){
        cout << res[i];
    }
    cout << " ";
}
void Try(int i){
    for(int j = 0 ; j < 2 ; j++){
        a[i] = j;
        res[i] = (a[i] ^ a[i - 1]);
        if(i == n) result();
        else Try(i + 1);
    }
}
void solve(){
    cin >> n;
    Try(1);
    cout << "\n";
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    
    int t = 1; cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By CodeWar :3 (Bao Trung)