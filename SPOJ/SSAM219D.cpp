//
#include <bits/stdc++.h>
#define pb push_back;
typedef long long i64;
typedef long i32;
const int mod = 1e9+7;
const int Max = 1e5+5;
using namespace std;
int n;
i64 a[Max];
void input(){
    cin >> n;
    for(int i = 0 ; i < n ; i++)
        cin >> a[i];
}
bool pytago(i64 a[],i64 n){
    for(int i = 0; i < n ; i++){
        a[i] = a[i]*a[i];
    }
    sort(a,a+n);
    for(i64 i = n - 1 ; i >= 2 ; i--){
        i64 l = 0;
        i64 r = i - 1;
        while(l < r){
            if(a[l] + a[r] == a[i])
                return true;
            (a[l] + a[r] < a[i]) ? l++ : r--;
        }
    }
    return false;
}
void solve(){
    input();
    pytago(a,n) ?  cout << "YES\n" : cout << "NO\n";
}
int main(){
    int t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}
