//
#include <bits/stdc++.h>
#define pb push_back;
typedef long long i64;
typedef long i32;
const int mod = 1e9+7;
const int Max = 1e6+5;
using namespace std;
int n,res = 1 ;
vector <int> v;
void solve(){
    cin >> n;
    for(int i = 0,x ; i < n ; i++){
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    i64 sum = v[0];

    for(int i = 1; i < n; i++){
        if(v[i] >= sum){
            sum += v[i];
            res++; 
        }
    }
    cout << res ;
}
int main(){
    solve();   
    return 0;
}
