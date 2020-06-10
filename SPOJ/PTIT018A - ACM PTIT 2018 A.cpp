//
#include <bits/stdc++.h>
#define pb push_back;
typedef long long i64;
typedef long i32;
const int mod = 1e9+7;
const int Max = 1e6+5;
using namespace std;
int a[1000006]={0},l,r,res;
void Prime(){
    a[1] = a[0] = 1;
    for(int i = 2 ; i <= 1000 ; i++){
        if(a[i] == 0){
            for(int j = i * i ; j <= 1000000 ; j += i)
                a[j] = 1;
        }
    }
}
void solve(){
    cin >> l >> r;
    res = 0;
    for(int i = l ; i <= r-6 ; i++)
        if(a[i] == 0 && a[i + 6] == 0)
            res ++;
    cout << res << endl;
}
int main(){
    Prime();
    int t;
    cin >> t;
    while(t--) 
        solve();
    return 0;
}
