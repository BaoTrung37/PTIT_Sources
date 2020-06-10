//
#include <bits/stdc++.h>
typedef long long i64;
typedef long i32;
#define pb push_back;
const int mod = 1e9+7;
const int Max = 1e6+5;
using namespace std;
int a,b;
i64 xoa0(i64 a){
    i64 tmp = 0,res =0;
    while(a>0){
        i64 temp = a % 10;
        if (temp != 0)
            tmp = tmp * 10 + temp;
        a /= 10;
    }
    while(tmp>0){
        i64 temp = tmp % 10;
        res = res * 10 + temp;
        tmp /= 10;
    } 
    return res;
}

void solve(){
    cin >> a >> b;
    i64 sum = a + b;
    i64 sum2 = xoa0(a) + xoa0(b);
    if(sum2 == xoa0(sum)) cout <<"YES"<<endl;
    else cout << "NO" << endl;
}
int main(){
    solve();
    return 0;
}
