//https://www.spoj.com/PTIT/problems/P181SUMC/
//https://ideone.com/j17lvr
#include <bits/stdc++.h>
#define pb push_back;
typedef long long i64;
typedef long i32;
const int mod = 1e9+7;
const int Max = 1e6+5;
using namespace std;
int n;
vector <i64> a,b;
void input(){
    cin >> n;
    for(int i = 0,x ; i < n ; i++){
        cin >> x;
        a.push_back(x);
    }
    for(int i = 0 ,x ; i < n ; i++){
        cin >> x;
        b.push_back(x);
    }
}
void solve(){
    if(a[0] < b[0]){
        cout << "-1" ;
        return;
    }
    i64 tmp = a[0] - b[0];
    for (int i = 1 ; i < n ; i++){
        if(a[i] < b[i] ){
            cout << "-1" ;
            return;
        }
        tmp = __gcd(a[i]-b[i] , tmp);
    }
    i64 maxx = *max_element(b.begin(),b.end());
    if(tmp == 0)  cout << maxx + 1;
    else {
        for(i64 i = maxx + 1 ; i <= tmp ; i++){
            if(tmp % i == 0){
                cout << i;
                return;
            }
        }
    }
}
int main(){
    input();
    solve();
    return 0;
}
