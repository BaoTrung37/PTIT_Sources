//
// Code By CodeWar :3
#include <bits/stdc++.h>
#define pb push_back;
typedef long long i64;
const int mod = 1e9+7;
using namespace std;
int n;
vector<int >a;
vector<int >b(1002,0);
void input(){
    cin >> n;
    a.resize(n);
    for(auto &i : a){
        cin >> i;
    }
        
}
void solve(){
    sort(a.begin(),a.end());
    int cnt = 0;
    for(int i = 0 ; i < n ; i++){
        for(int j = i + 1 ; j < n; j++){
            if(a[j] > a[i] && b[j] == 0){
                cnt++;
                b[j] = 1;
                break;
            }
        }
    }
    cout << cnt;
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