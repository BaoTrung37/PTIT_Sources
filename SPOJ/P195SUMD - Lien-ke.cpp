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
    for(int i = 0 ; i < 2 * n ;i++)
        cin >> a[i];
}

void solve(){
    int minswap = 0;
    int check[n+1] ={0};
    for(int i = 0 ; i < 2 * n - 1;i += 2){
        if(a[i] != a[i + 1]){
            int cnt = 0;
            for(int j = i + 1 ; j < 2 * n ;j++){
                if(a[j] != a[i]){
                    cnt++;
                }
                else{
                    for(int k = j ; k > i + 1 ; k--){
                        swap(a[k] ,a [k-1]);
                    }
                    break;
                }
            }
            minswap += cnt;
        }
    }
    cout << minswap;
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