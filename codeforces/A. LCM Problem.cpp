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

int n,m;
void solve(){
    cin >> n >> m;
    if(n *2 > m){
        cout << "-1 -1\n";
        return;
    }
    cout << n << " " << n * 2 << "\n";
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    
    int t = 1; cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By B_B_B_T (Bad Boi Bao Trung)