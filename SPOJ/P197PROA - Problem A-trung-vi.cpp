//
// Code By CodeWar :3
#include <bits/stdc++.h>
#define pb push_back;
typedef long long i64;
const int mod = 1e9+7;
using namespace std;
int n,s;
vector <int> a;
void input(){
    cin >> n >> s;
    a.resize(n);
    for(auto &i : a)
        cin >> i;
}

void solve(){
    int m = n / 2;
    i64 res = 0;
    sort(a.begin(),a.end());
    if(a[m] == s) cout << 0;
    else if(a[m] > s){
        for(int i = m ; i >= 0 ; i--){
            if(a[i] - s >= 0){
                res += (a[i] - s);
            }
            else break;
        }
        cout << res;
    }
    else{
        for(int i = m ; i < n ; i++){
            if(s - a[i] >= 0){
                res += (s- a[i]);
            }
            else break;
        }
        cout << res ;
    }
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