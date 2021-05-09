//
// Code By CodeWar :3
#include <bits/stdc++.h>
#define pb push_back;
typedef long long i64;
const int mod = 1e9+7;
using namespace std;
int n;
vector <int> a; 
void input(){
    cin >> n;
    a.resize(n);
    for(auto &i : a)
        cin >> i;
}

void solve(){
    i64 sum = 0;
    for(auto i : a) 
        sum += i;
    int x =*max_element(a.begin(),a.end());
    if(sum % 2 == 0 && x <= sum - x) cout << "YES";
    else cout << "NO";
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t = 1; //cin >> t;
    while(t--){
        input();solve();
    }
    return 0;
}

// Code By CodeWar :3