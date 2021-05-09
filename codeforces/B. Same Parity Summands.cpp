//
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;

int n,k;
void solve(){
    cin >> n >> k;
    int n1 = n - (k - 1);
    if( n1 > 0 && n1 % 2 == 1){
        cout << "YES\n";
        for(int i = 1 ; i < k ; i++)
            cout << "1 ";
        cout << n1 << '\n';
        return;
    }
    int n2 = n - (k - 1) * 2;
    if(n2 > 0 && n2 % 2 == 0){
        cout << "YES\n";
        for(int i = 1; i < k ; i++)
            cout << "2 ";
        cout << n2 << '\n';
        return;
    }
    cout << "NO\n";
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    
    int t = 1; cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By CodeWar :3 (Bao Trung)