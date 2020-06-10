//
// Code By CodeWar :3
#include <bits/stdc++.h>
#define pb push_back;
typedef long long i64;
typedef long i32;
const int mod = 1e9+7;
const int nMax = 1e6+5;
using namespace std;
int n;
i64 a[100005];
void input(){
    cin >> n;
    for(int i = 0 ; i < n ; i++)
        cin >> a[i];
}

void solve(){
    sort(a,a+n);
    i64 b[10],vt = 0;
    b[0] = 1;
    b[1] = 1;
    b[2] = 1;
    for(int i = 0 ; i < n - 1; i++){
        if(a[i] == a[i+1]){
            b[vt]++;
        }
        else vt++;
        if(vt == 3) break;  
    }
    //cout << b[0] << " " << b[1] << " " << b[2] << endl;
    if(b[0] >= 3) cout << (b[0] * (b[0]- 1) * (b[0]-2)) /6;
    else if(b[0] == 2 && b[1] >= 1) cout << b[1];
    else if(b[0] == 1 && b[1] >= 2) cout << (b[1] * (b[1] - 1)) /2;
    else if(b[0] == 1 && b[1] == 1 && b[2] >= 1) cout << b[2];
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