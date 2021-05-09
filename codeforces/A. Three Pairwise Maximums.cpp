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

int a[3];
void solve(){
    for(int i = 0 ; i < 3 ; i++)
        cin >> a[i];
    sort(a,a+3);
    if(a[0] <= a[2] && a[1] < a[2]){
        cout << "NO\n";
        return;
    }
     cout << "YES\n";
    cout << a[1] << ' ' << a[0] << ' '<< 1 << '\n';
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    
    int t = 1; cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By CodeWar :3 (Bao Trung)