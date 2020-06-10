//
// Code By CodeWar :3
#include <bits/stdc++.h>
#define pb push_back;
typedef long long i64;
typedef long i32;
const int mod = 1e9+7;
const int nMax = 1e6+5;
using namespace std;
int n,a[1000];
void input(){
    cin >> n;
    for(int i = 0 ; i < n ;i++)
        cin >> a[i];
}

void solve(){
    int nmin = INT16_MAX,nmax = INT16_MIN,vtmin = -1,vtmax = -1;
    for(int i = 0 ; i < n ; i++){
        if(nmin > a[i]) {
            nmin = a[i];
            vtmin = i;
        }
        if(nmax < a[i]){
            nmax = a[i];
            vtmax = i;
        }
    }
    if(vtmin > vtmax) swap(vtmin,vtmax);
    if(n - 1 - vtmin >= vtmax ) cout << n -1 - vtmin;
    else cout <<  vtmax;
}

int main(){
    int t = 1; //cin >> t;
    while(t--){
        input();
        solve();
    }
    return 0;
}

// Code By CodeWar :3