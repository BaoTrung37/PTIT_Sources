/**
 * https://codeforces.com/blog/entry/21173
 *    authur: Bao Trung (Koi Cute)
**/
#include <bits/stdc++.h>
using namespace std;
typedef long long i64;
const int mod = 1e9+7;
#define pb push_back;
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;
int n;
void solve(){
    cin >> n;
    int res[10005] = {0},cnt = 0;
    set_vect(a,n);
    res[0] = 1;
    for(int i = 0 ; i < n ; i++){
        for(int j = cnt ; j >= 0 ; j--){
            if(res[j]){
                res [j + a[i]] = 1;
            }
        }
        cnt += a[i];
    }
    if(cnt & 1) {
        cout << "NO";
    }
    else{
        if(res[cnt / 2]) cout << "YES";
        else cout << "NO";
    }
    
    cout << endl;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t = 1; cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By CodeWar :3