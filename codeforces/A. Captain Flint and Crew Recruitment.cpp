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
    if(n < 31){
        cout << "NO\n";
        return;
    }
    cout << "YES\n";
    if(n == 36 || n == 40 || n == 44){
        cout << 6  <<" " << 10  << " " << 15 << " " << n - 31 << "\n"; 
    }
    else{
        cout << 6  <<" " << 10  << " " << 14 << " " << n - 30 << "\n"; 
    }
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    
    int t = 1; cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By Pain (Bao Trung)