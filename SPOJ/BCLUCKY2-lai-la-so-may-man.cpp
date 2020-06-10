//
// Code By CodeWar :3
#include <bits/stdc++.h>
#define pb push_back;
typedef long long i64;
const int mod = 1e9+7;
using namespace std;
int n,cnt_4 = 0,cnt_7 = 0;
void input(){
    cin >> n;
}

void solve(){
    int i = 0,kt = 1,min = 99999999;
    while(i * 7 <= n){
        if((n - i * 7) % 4 == 0){
            kt = 0;
            if( i + (n - i * 7) / 4 < min){
                cnt_7 = i;
                cnt_4 = (n - i * 7) / 4;
                min = cnt_4 + cnt_7;
            }
        }
        i++;
    }
    if(! kt ){
        for(int i = 0 ; i < cnt_4 ; i++)
            cout << 4;
        for(int i = 0 ; i < cnt_7 ; i++)
            cout << 7;
    }
    else cout << -1;
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