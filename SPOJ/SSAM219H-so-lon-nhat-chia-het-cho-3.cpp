/**
 *    authur: Bao Trung
**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;

const int nxm = 1e5+2;
int n,a[nxm],d[10];
void solve(){
    cin >> n;
    memset(d,0,sizeof(d));
    for(int i = 0 ; i < n ; i++){
        cin >> a[i];
        d[a[i]]++;
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