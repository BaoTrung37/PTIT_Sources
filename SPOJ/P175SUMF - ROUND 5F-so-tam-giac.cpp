//
// Code By CodeWar :3
#include <bits/stdc++.h>
#define pb push_back;
typedef long long i64;
typedef long i32;
const int mod = 1e9+7;
const int nMax = 1e6+5;
using namespace std;
i64 n;
vector <i64> a;
void input(){
    cin >> n;
}
int Search_binaa(i64 l , i64 r , vector <i64> a , i64 key){
    while(l <= r){
        int mid = (l + r) /2;
        if(a[mid] == key) 
            return a[mid];
        else if(a[mid] < key) l = mid + 1;
        else r = mid - 1;
    }
    return -1;
}
void pre(){
    i64 i = 1,s=1;
    while(s <= n){
        s = i * (i + 1) / 2;
        a.push_back(s);
        i++; 
    }
}
void solve(){
    pre();
    for(int i = 0 ; i < a.size() ; i++){
        if(Search_binaa(1,(i64)a.size(),a, n - a[i]) > 0){
            cout << "YES";
            return;
        }
    }
    cout << "NO";
}
 
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t = 1; //cin >> t;
    while(t--){
        input();
        solve();
    }
    return 0;
}
 
// Code By CodeWar :3 