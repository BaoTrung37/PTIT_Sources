/**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define ii pair<int, int>
#define X first
#define Y second
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<ll>a(n + 1); for(int i=0;i<n;i++)cin>>a[i];
#define db(x) cerr << #x << " = "  << (x) << ' ';
const int N = 100005;

int n,m;
ll res;
void solve(){
    cin >> n;
    set_vect(a,n);
    cin >> m;
    set_vect(b,m);
    int l1 = 0,l2 = 0;
    res = 0;
    for(int i = 0 ; i < n ; i++) res += a[i];
    for(int i = 0 ; i < m ; i++) res -= b[i];
    if(res != 0){
        cout << -1;
        return;
    }
    res = 0;
    while(l1 < n && l2 < m){
        if(a[l1] == b[l2]){
            l1++;
            l2++;
            res++;
        }
        else if(a[l1] < b[l2]){
            l1++;
            a[l1] += a[l1 - 1];
        }
        else{
            l2++;
            b[l2] += b[l2 - 1];
        }
    }
    cout << res;
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    
    int t = 1; //cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By Pain (Bao Trung)