/**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;

int n,d[100005];
void solve(){
    cin >> n;
    set_vect(a,n);
    memset(d,0,sizeof(d));
    int nmin = a[0],nmax = a[0];
    d[a[0]]++;
    for(int i = 1 ; i < n ; i++){
        nmin = min(a[i],nmin);
        nmax = max(a[i],nmax);
        d[a[i]]++;
    }
    int res = 0;
    for(int i = nmin ; i <= nmax ; i++)
        if(d[i] == 0)
            res++;
    cout << res << '\n';
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    
    int t = 1; cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By CodeWar :3 (Bao Trung)