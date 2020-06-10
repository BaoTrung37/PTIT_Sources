//
// Code By CodeWar :3
#include <bits/stdc++.h>
#define pb push_back;
typedef long long i64;
const int mod = 1e9+7;
using namespace std;
int n,x;
void solve(){
    cin >> n >> x;
    if(n == 1 && x > 9) cout << -1 ;
    else{
        if(x > 9)   n--;
        n--;
        cout << x;
        while(n--)
            cout << 0;
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t = 1; //cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By CodeWar :3