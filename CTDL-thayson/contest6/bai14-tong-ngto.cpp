/**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;
int isprime(int n){
    if (n < 2) return 0;
    for(int i = 2 ; i * i <= n;i++)
        if(n % i == 0) return 0;
    return 1;
}
int n;

void solve(){
    cin >> n;
    for(int i = 2 ; i <= n / 2 ; i++){
        if(isprime(i) && isprime(n - i)){
            cout << i << ' ' << n - i << '\n';
            return;
        }
    }  
    cout << -1 << '\n';  
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    
    int t = 1; cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By CodeWar :3 (Bao Trung)