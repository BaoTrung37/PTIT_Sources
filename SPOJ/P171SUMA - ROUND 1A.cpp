//
// Code By CodeWar :3
#include <bits/stdc++.h>
#define pb push_back;
typedef long long i64;
const int mod = 1e9+7;
using namespace std;

pair <int,int> a[4];
void input(){
    for(int i = 0 ; i < 4 ; i++){
        cin >> a[i].first >> a[i].second;
    }
}
void solve(){
    sort(a,a + 4);
    if(a[0].first == a[3].first || a[0].second == a[2].second){
        cout << "NO" << endl;
    }
    else{
        if(a[0].first + a[2].first - a[1].first == a[3].first && a[0].second + a[1].second - a[2].second == a[3].second){
            cout << "YES" << endl;
        }
        else cout << "NO" << endl;
    }
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t--){
        input();solve();
    }
    return 0;
}

// Code By CodeWar :3