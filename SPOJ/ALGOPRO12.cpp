//https://www.spoj.com/PTIT/problems/ALGOPRO12/
#include <bits/stdc++.h>
#define pb push_back;
typedef long long i64;
typedef long i32;
const int mod = 1e9+7;
const int Max = 1e6+5;
using namespace std;
int n;
i64 res;
void solve(){
    cin >> n;
    res = 1;
    int x = sqrt(n);
    for(int i = 2 ; i <= x ; i++){
        if(n % i == 0){
            i32 k = 0;
            while(n % i == 0){
                n/=i;
                k++;
            }
            res = res * (2 * k + 1);
        }
    }
    if(n > 1) res *= 3;
    cout << res << endl;
}
int main(){
    int t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}
