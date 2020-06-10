//
// Code By CodeWar :3
#include <bits/stdc++.h>
#define pb push_back;
typedef long long i64;
typedef long i32;
const int mod = 1e9+7;
const int nMax = 1e6+5;
using namespace std;
int n,a[10000];
void input(){
    cin >> n;
    for(int i = 0 ; i < n ; i++)
        cin >> a[i];
}

void solve(){
    int cnt = 0,min = 99999,max = -99999;
    for(int i = 0 ; i < n ; i++){
        if(a[i] > max) {
            max = a[i];
        }
        if(a[i] < min){
            min = a[i];
        }
    }
    for(int i = 0 ; i < n ; i ++){
        if(a[i] == max){
            cnt += i;
            for(int j = i ; j > 0 ; j--){
               a[j] = a[j-1]; 
            }
            break;
        }
    }
    a[0] = max;
    for(int i = n - 1 ; i >= 0 ; i--){
        if(a[i]== min){
            cnt += n -1 - i;
            break;
        }
    }
    cout << cnt;
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