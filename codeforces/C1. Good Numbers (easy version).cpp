/**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;

int n;
void solve(){
    cin >> n;   
    while(1){
        bool OK = true;
        int cur = n;
        while(cur > 0){
            if(OK && cur % 3 == 2) OK = false;
            cur /= 3;
        }
        if(OK) break;
        ++n;
    }
    cout << n << '\n';
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    
    int t = 1; cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By CodeWar :3 (Bao Trung)