//
#include <bits/stdc++.h>
#define pb push_back;
typedef long long i64;
typedef long i32;
const int mod = 1e9+7;
const int Max = 1e6+5;
using namespace std;
int n, a[100005],resTy = 1,resTeo = 0;
void solve(){
    cin >> n;
    for(int i = 0 ; i < n ; i++)
        cin >> a[i];
    int i = 1, j = n - 1,sum1 = a[0], sum2 = 0;
    while(i <= j){
        if(sum1 + a[i] <= sum2 + a[j]){
            resTy++;
            sum1 += a[i];
            i++;
        }
        else{
            resTeo++;
            sum2 += a[j];
            j--;
        }
    }
    cout << resTy << " " << resTeo;
}
int main(){
    solve();
    return 0;
}
