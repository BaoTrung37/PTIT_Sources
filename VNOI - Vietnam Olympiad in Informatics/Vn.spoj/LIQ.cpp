//
// Code By CodeWar :3
#include <bits/stdc++.h>
#define pb push_back;
typedef long long i64;
const int mod = 1e9+7;
using namespace std;
int n,a[1002],L[1002],lmax,maxx = 0;
void input(){
    cin >> n;
    for(int i = 0 ; i < n ; i++)
        cin >> a[i];
}

void solve(){
    for(int i = 0 ; i< n ; i++){
        lmax = 0;
        for(int j = 0 ; j < i ; j++){
            if(a[i] > a[j] && lmax < L[j])
                lmax = L[j];
        }
        lmax++;
        L[i] = lmax;
        if(L[i] > maxx ) maxx = L[i];
    }
    cout << maxx;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t = 1; //cin >> t;
    while(t--){
        input();solve();
    }
    return 0;
}

// Code By CodeWar :3