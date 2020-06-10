//
#include <bits/stdc++.h>
#define pb push_back;
typedef long long i64;
typedef long i32;
const int mod = 1e9+7;
const int Max = 1e6+5;
using namespace std;

int n,a[Max],res1 = 1,res2 = 1;
void solve(){
    cin >> n;
    for(int i = 0; i < n ; i++)
        cin >> a[i];
    if(n == 1){
        cout << "1 0"; 
    }
    else if(n == 0){
        cout << "0 0";
    }
    else{
        int demT = a[0],demP = a[n-1];
        int t = 1, p = n - 2;
        while(t <= p){
            if(demT <= demP){
                res1 ++;
                demT += a[t];
                t++;
            }
            else{
                res2 ++;
                demP += a[p];
                p--;
            }
        }
        cout << res1 << " " << res2;
    }
}
int main(){
    solve();
    return 0;
}
