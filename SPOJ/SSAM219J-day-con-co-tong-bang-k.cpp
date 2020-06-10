//
#include <bits/stdc++.h>
#define pb push_back;
typedef long long i64;
typedef long i32;
const int mod = 1e9+7;
const int Max = 1e6+5;
using namespace std;
int n;
i64 k;
bool Search(i64 u[],i64 key,int j, int n){
    int l = j, r = n - 1, mid;
    while(l <= r){
        mid = (l + r) / 2;
        if(u[mid] == key)
            return true;
        else if(u[mid] > key) r = mid - 1;
        else l = mid + 1;
    }
    return false;
}
void solve(){
    cin >> n >> k;
    bool OK = false;
    i64 a[100005],u[100005];
    a[0] = 0; u[0] = 0;
    for(int i = 1 ; i <= n ; i++){
        cin >> a[i];
        u[i] = u[i-1] + a[i];
    }   
    for(int i = n ; i >= 0 ; i--){
        OK = Search(u,u[i] - k , 0 , i);
        if(OK) break;
    }
    if(OK) cout << "YES";
    else cout << "NO";
    cout << endl;
}
int main(){
    int t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}
