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

int n;
void solve(){
    cin >> n;
    int x = (n + 3) / 4;
    for(int i = 0 ; i < n - x ; i++){
        cout << 9;
    }
    for(int i = 0 ; i < x ; i++){
        cout << 8;
    }
    cout << "\n";
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    
    int t = 1; cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By Pain (Bao Trung)