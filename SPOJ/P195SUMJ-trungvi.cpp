//
// Code By CodeWar :3
#include <bits/stdc++.h>
#define pb push_back;
typedef long long i64;
typedef long i32;
const int mod = 1e9+7;
const int nMax = 1e6+5;
using namespace std;
int n,k;
vector <int> a;
void input(){
    cin >> n >> k;
    a.resize(n);
    for(int i = 0 ; i < n ; i++)
        cin >> a[i];
}

void solve(){ 
    int i;  
    sort(a.begin(),a.end());
    int m = n / 2;
    for( i = a[m] ; k > 0 ; i++){
        while(i == a[m+1]) m++;
        k = k - (m - n / 2 + 1);
    }
    if(k == 0) cout << i;
    else cout << i - 1;
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