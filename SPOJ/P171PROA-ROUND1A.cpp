//
#include <bits/stdc++.h>
#define pb push_back;
typedef long long i64;
typedef long i32;
const int mod = 1e9+7;
const int Max = 1e6+5;
using namespace std;
i64 l,r,x,gh,t = 1;

void solve(){
    cin >> l >> r >>x;
    int kt = 0;
    gh = log(r)/log(x); // gioi han chay
    for(int i = 0 ; i <= gh ; i++){
        if( l<=t && t <= r){
            kt = 1;
            cout << t << " ";
        }
        t *= x;       
    }
    if(kt == 0) cout <<"-1";
}
int main(){
    solve();
    return 0;
}
