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

int l,r;
ll m;
void solve(){
    cin >> l >> r >> m;
    int len = r - l + 1;
    for(int i = l ; i <= r ; i++){
        int kt = m % i;
        if(kt < len && kt != m){
            cout << i << " " << l + kt << " " << l << "\n";
            return;
        }
        if(i - kt < len){
            cout << i << " " << l << " " << l + (i - kt) << "\n";
            return;
        }
    }
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    
    int t = 1; cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By BadBoy (Bao Trung)