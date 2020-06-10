//
// Code By CodeWar :3
#include <bits/stdc++.h>
#define pb push_back;
typedef long long i64;
typedef long i32;
const int mod = 1e9+7;
const int nMax = 1e6+5;
using namespace std;
int n,a[4005]={0};
void Prime(){
    a[1] = a[0] = 1;
    for(int i = 2; i <= sqrt(4000) ; i++)
        if(a[i] == 0)
            for(int j = i * i ; j <= 4000 ; j += i)
                a[j] = 1;
}
void input(){
    cin >> n;
}

void solve(){
    int res = 0, cnt = 0;
    for(int i = 2 ; i <= n ; i ++){
        cnt = 0;
        for(int j = 2 ; j < i ; j++){
            if(a[j] == 0 && i % j == 0) cnt++;
        }
        if(cnt == 2) res ++;
    }
    cout << res;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t = 1; //cin >> t;
    Prime();
    while(t--){
        input();
        solve();
    }
    return 0;
}

// Code By CodeWar :3