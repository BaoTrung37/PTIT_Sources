/**
 *    authur: Bao Trung
**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;

int n;
ll F[100];
void Fibo(){
    F[1] = F[2] = 1;
    for(int i = 3 ; i <= 92 ; i++)
        F[i] = F[i - 1] + F[i -2];
}
void solve(){
    cin >> n;
    cout << F[n] << '\n';
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int t = 1; cin >> t;
    Fibo();
    while(t--){solve();}
    return 0;
}

// Code By CodeWar :3