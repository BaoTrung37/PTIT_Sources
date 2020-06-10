//https://www.spoj.com/PTIT/problems/SSAM119G/
#include <bits/stdc++.h>
#define pb push_back;
typedef long long i64;
typedef long i32;
const int mod = 1e9+7;
const int Max = 1e6+5;
using namespace std;
int n,k;
void solve(){
    cin >> n >> k;
    int a[1000],b[100005] = {0};
    for(int i = 1 ; i <= n ;i++)
        cin >> a[i];
    b[0] = 1;
    for(int i = 1 ; i <= n ; i++)
        for(int j = k ; j >= a[i] ; j--)
            if(b[j] == 0 && b[j - a[i]] == 1) b[j] = 1;
    if(b[k] == 1) cout << "YES";
    else cout <<"NO";
    cout << endl; 
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}
