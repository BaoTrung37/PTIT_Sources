//
#include <bits/stdc++.h>
typedef long long i64;
typedef long i32;
#define pb push_back;
const int mod = 1e9+7;
const int Max = 1e6+5;
using namespace std;
vector <int> v;
int n;
long long res1 = 0, sum = 0;
void solve(){
    cin >> n;
    int x;
    for(int i = 0 ; i < n ; i++){
        cin >> x;
        v.push_back(x);
        if( x > 0 ) res1 += x;
    }
    long long max1 = -1, sum = 0;
    for(int i = 0; i < v.size() ; i++){
        sum += v[i];
        if(sum < 0) sum = 0;
        if(max1 < sum ) max1 = sum;
    }
    cout << max1 << " " << res1;
}
int main(){
    solve();
    return 0;
}
