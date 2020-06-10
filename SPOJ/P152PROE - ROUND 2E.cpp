//
#include <bits/stdc++.h>
#define pb push_back;
typedef long long i64;
typedef long i32;
const int mod = 1e9+7;
const int Max = 1e6+5;
using namespace std;
int n;
i64 a[1000006]={0};
void input(){
    cin >> n;
    a[0] = 0;
    for(int i = 1 , x; i <= n ; i++){
        cin >> x;
        a[i] = a[i-1] + x;
    }
}
void solve(){
    input();
    i64 sum = 0;
    if(a[n] % 3 == 0){
        int count = 0;
        for(int i = n - 1 ; i > 0 ; i--){
            if(a[i] = a[n] / 3)
                sum = sum + count;
            if(a[i] = a[n] / 3 * 2)
                count ++;
        }
    }
    cout << sum << endl;
}
int main(){
    solve();
    return 0;
}
