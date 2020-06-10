//
// Code By CodeWar :3
#include <bits/stdc++.h>
#define pb push_back;
typedef long long i64;
const int mod = 1e9+7;
using namespace std;
int n;
void input(){
    cin >> n;
}

void solve(){
    int res = 0, cnt = 0;
    while(n--){
        int tmp;
        cin >> tmp;
        if(tmp == -1){
            if(!cnt) res++;
            else cnt--;
        }
        else cnt += tmp;
    }
    cout << res;
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