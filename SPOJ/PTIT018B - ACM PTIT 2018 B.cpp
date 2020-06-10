//
#include <bits/stdc++.h>
#define pb push_back;
typedef long long i64;
typedef long i32;
const int mod = 1e9+7;
const int Max = 1e6+5;
using namespace std;
int a[105],b[105];
int n;
void solve(){
    cin >> n;
    for(int i = 0 ; i < n ; i++)
        cin >> a[i];
    for(int i = 0 ; i < n ; i++)
        cin >> b[i];
    sort(a,a+n);
    sort(b,b+n);
    for(int i = 0 ; i < n ; i++)
        if(a[i] > b[i]){
            cout << "NO" << endl;
            return;
        }
    cout << "YES" << endl;
}
int main(){
    int t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}
