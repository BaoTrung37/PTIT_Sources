//
// Code By CodeWar :3
#include <bits/stdc++.h>
#define pb push_back;
typedef long long i64;
const int mod = 1e9+7;
using namespace std;
int n;
void input(){
    cin >> n;
}

void solve(){
    int cnt1 = 0,cnt2 = 0;
    while(n--){
        int a,b;
        cin >> a >> b;
        if(a < b) cnt2++;
        if(a > b) cnt1++;
    }
    if(cnt1 > cnt2) cout << "Mishka";
    else if (cnt1 == cnt2) cout << "Friendship is magic!^^";
    else cout << "Chris" ;
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