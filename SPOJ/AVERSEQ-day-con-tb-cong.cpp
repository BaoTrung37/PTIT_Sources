//https://www.spoj.com/PTIT/problems/AVERSEQ/
#include <bits/stdc++.h>
#define pb push_back;
typedef long long i64;
typedef long i32;
const int mod = 1e9+7;
const int Max = 1e6+5;
using namespace std;
int n,k,res = 0;
i64 a[1000005];
void solve(){
    cin >> n >> k;
    a[0] = 0;
    for(int i = 1,x ; i <= n ; i++){
        cin >> x;
        a[i] = a[i-1] + x;
    }
    for(int i = 1 ; i <= n ; i++){
        for(int j = 0 ; j < i ; j++){
            i64 x = (a[i] - a[j]) / (i - j);
            if(x >= k && (i - j) > res)
                res = i - j;
        }
    }
    cout << res;
}
int main(){
    solve();
    return 0;
}
