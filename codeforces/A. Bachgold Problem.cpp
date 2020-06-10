//
// Code By CodeWar :3
#include <bits/stdc++.h>
#define pb push_back;
typedef long long i64;
const int mod = 1e9+7;
using namespace std;
int n;
void solve(){
    cin >> n;
    vector <int> a;
    if(n % 2 == 1)
        n -= 3, a.push_back(3);
    n /= 2;
    while(n --){
        a.push_back(2);
    }
    cout << a.size() << endl;
    for(auto i : a)
        cout << i << ' ';
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t = 1; //cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By CodeWar :3