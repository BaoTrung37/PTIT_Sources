/**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;

int n,k;
void solve(){
    cin >> n >> k;
    set_vect(a,n); set_vect(b,n);
    sort(all(a));sort(all(b));
    for(int i = 0 ; i < k ; i++){
        if(a[i] < b[n - i - 1])
            swap(a[i],b[n - i - 1]);
    }
    ll sum = 0;
    for(int i = 0 ; i < n ; i++)
        sum += a[i];
    cout << sum <<'\n';
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    
    int t = 1; cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By CodeWar :3 (Bao Trung)