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
vector <i64> a;
void input(){
    cin >> n >> k;
    a.resize(n);
    for(int i = 0 ; i < n ; i++){
        cin >> a[i];
    }
}

void solve(){
    sort(a.begin(),a.end());
    i64 res = 0;
    for(int i = 0 ; i < n ; i++){
        if(k > 0 && a[i] < 0){
            a[i] = abs(a[i]);
            k--;
        }
        else break;      
    }
    sort(a.begin(),a.end(),greater<int>());
    for(int i = 0 ; i < n - 1; i++)
        res += a[i];
    if(k % 2 == 0){
        res = res + a[n -1];
    }
    else  res = res - a[n-1];
    cout << res;
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
/*

#include <bits/stdc++.h>
#define pb push_back;
typedef long long i64;
typedef long i32;
const int mod = 1e9+7;
const int nMax = 1e6+5;
using namespace std;
int n,k,nmin = 999999999;
int slmin = 0;
vector <int> a;
void input(){
    cin >> n >> k;
    a.resize(n);
    for(int i = 0 ; i < n ; i++){
        cin >> a[i];
        if(abs(a[i]) >= 0 && abs(a[i]) < nmin) nmin = abs(a[i]);
        if(a[i] < 0) slmin ++;
    }
}

void solve(){
    sort(a.begin(),a.end());
    i64 res = 0;
    if(k <= slmin){
        for(int i = 0 ; i < k ; i++)
            res -= a[i];
        for(int i = k ; i < n ; i++)
            res += a[i];
    }
    else{
        int kt = k - slmin;
        for(int i = 0; i < n ; i++)
            res += abs(a[i]);
        res = res - nmin;
        if(kt % 2 == 1)
            res -= nmin;
        else res += nmin;
    }
    cout << res;
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

*/