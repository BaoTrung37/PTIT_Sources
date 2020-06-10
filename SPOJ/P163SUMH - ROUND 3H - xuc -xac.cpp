//
// Code By CodeWar :3
#include <bits/stdc++.h>
#define pb push_back;
typedef long long i64;
typedef long i32;
const int mod = 1e9+7;
const int nMax = 1e6+5;
using namespace std;
int a,b;
void input(){
    cin >> a >> b;
}

void solve(){
    int x = 0,y = 0,z = 0;
    for(int i = 1 ; i <= 6 ; i++){
        if(abs(i - a) < abs(i-b)) x++;
        else if (abs(i - a) > abs(i-b)) z++;
        else y ++;
    }
    cout << x << ' ' << y << ' ' << z;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t = 1; //cin >> t;
    while(t--){
        input();
        solve();
    }
    return 0;
}

// Code By CodeWar :3