/**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;

int n,a[100004];
void solve(){
    cin >> n;
    for(int i = 0 ; i < n; i++)
        cin >> a[i];
    sort(a,a+n);
    int ans = 0;
    for(int i = n - 1 ; i >= 0 ; i--){
        if(a[i] <= i + 1){
            ans = i + 1;
            break;
        }
    }
    cout << ans + 1<< '\n';
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    
    int t = 1; cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By CodeWar :3 (Bao Trung)