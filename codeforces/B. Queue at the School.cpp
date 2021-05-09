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
string s;
void input(){
    cin >> n >> k >> s;
}

void solve(){
    while(k--){
        for(int i = 0 ; i < n ; i++){
            if(s[i] =='B' && s[i+1] == 'G')
                swap(s[i],s[i+1]),i++;
        }
    }
    cout << s;
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