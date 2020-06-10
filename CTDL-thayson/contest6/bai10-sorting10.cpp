/**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;

int n;
void solve(){
    cin >> n;
    int d[10] = {0};
    set_vect(a,n);
    for(int i = 0 ; i < n ; i++){
        int n = a[i];
        while(n > 0){
            d[n % 10]++;
            n/=10;
        }
    }
    for(int i = 0;  i < 10 ; i++)
        if(d[i]){
            cout << i << ' ';
        }
    cout << '\n';
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    
    int t = 1; cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By CodeWar :3 (Bao Trung)