/**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define ii pair<int, int>
#define X first
#define Y second
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;
const int N = 1e5 + 5;

int n;
void solve(){
    cin >> n;
    int res = 0;
    while(n > 1){
        if( n % 6 == 0) n /= 6 ,res++;
        else if(n % 3 == 0) n *= 2 , res ++;
        else break;
    }   
    if(n == 1) cout << res;
    else cout << -1;
    cout << '\n';
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    
    int t = 1; cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By CodeWar :3 (Bao Trung)