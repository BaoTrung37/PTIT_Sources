/**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;

int n;
void solve(){
    cin >> n;
    vector <int> a(n),b(n);
    for(int i = 0 ; i < n ; i++){
        cin >> a[i];
        b[i] = a[i];
    }
    sort(all(a));
    int vt1 = 0,vt2 = 0;
    for(int i = 0 ; i < n ; i++){
        if(a[i] != b[i]){
            vt1 = i;
            break;
        }
    }
    for(int i = n - 1; i >= 0 ; i--){
        if(a[i] != b[i]){
            vt2 = i;
            break;
        }
    }
    cout << vt1 + 1 <<' ' << vt2 + 1 << '\n';
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    
    int t = 1; cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By CodeWar :3 (Bao Trung)