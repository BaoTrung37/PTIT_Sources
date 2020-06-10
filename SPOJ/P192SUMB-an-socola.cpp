//https://www.spoj.com/PTIT/problems/P192SUMB/
#include <bits/stdc++.h>
#define pb push_back;
typedef long long i64;
typedef long i32;
const int mod = 1e9+7;
const int Max = 1e6+5;
using namespace std;

int main(){
    i64 n , k , x;
    cin >> n >> k;
    if (n % 2 == 0) x = n/2;
    else x = n/2 +1; 
    cout << x << endl ;
    i64 ans = (x* (x + 1)) / 2 - k;
    if(ans <= 0) cout << "0";
    else cout << ans;
    return 0;
}
