/**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define ii pair<int, int>
#define X first
#define Y second
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<int>a(n); for(int i=0;i<n;i++)cin>>a[i];
#define db(x) cerr << #x << " = "  << (x) << ' ';
const int N = 100005;

int n;
void solve(){
    cin >> n ;
    set_vect(a,n);
    set_vect(b,n);
    int ma = *min_element(all(a)) ,mb = *min_element(all(b));
    ll res = 0;
    for(int i = 0 ; i < n ; i++){
        res += max(a[i] - ma, b[i] - mb);
    }
    cout << res << "\n";
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    
    int t = 1; cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By Pain (Bao Trung)