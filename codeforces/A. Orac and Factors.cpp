/*
    n % 2 == 0    res = n + 2 * k
    n % 2 == 1    res = n + 2(k - 1) + d(X)
    d(x) nghiệm lẻ nhỏ nhất khác 1
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;

int n,k;
void solve(){
    cin >> n >> k;
    if(n & 1){
        int i;
        for(i = 2 ; i <= n ;i++)
            if(n % i == 0){
                break;
            }
        n += i;
        k--;
    }
    cout << n + 2 * k << '\n';
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    
    int t = 1; cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By CodeWar :3 (Bao Trung)