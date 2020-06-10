//
#include <bits/stdc++.h>
#define pb push_back;
typedef long long i64;
typedef long i32;
const int mod = 1e9+7;
const int Max = 1e6+5;
using namespace std;
int n,a[102], lmax ,L[102], M[102], mmax;
void solve(){
    cin >> n;
    for(int i = 0 ; i < n ; i++)
        cin >> a[i];
    int maxx = -1;
    for(int i = 0 ; i < n ; i++){
        lmax = 0;
        for(int j = 0 ; j < i ; j ++)
            if( a[i] > a[j] && L[j] > lmax)
                lmax = L[j];
        L[i] = lmax + 1;
    }
    for(int i = n - 1 ; i >= 0 ; i--){
        mmax = 0;
        for(int j = n - 1; j > i ; j--)
            if(a[i] > a[j] && M[j] > mmax)
                mmax = M[j];
        M[i] = mmax + 1;
    }
    for(int i = 0 ; i < n - 1 ; i++){
        for(int j = i + 1 ; j < n ; j++){
            if(L[i] + M[j] > maxx && L[i] + M[j] < n) maxx = L[i] + M[j];
        }
    }
    cout << maxx << endl;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
