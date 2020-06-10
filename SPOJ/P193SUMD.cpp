//
// Code By CodeWar :3
#include <bits/stdc++.h>
#define pb push_back;
typedef long long i64;
const int mod = 1e9+7;
using namespace std;
string a,b;
void input(){
    cin >> a >> b;
}

void solve(){
    int dem1a = 0,dem1b = 0;
    for(int i = 0 ; i < b.length(); i++){
        if(b[i] == '1') dem1b++;
        if(a[i] == '1') dem1a++;
    }
    int i = 1,len = a.length() - b.length(),cnt = 0;
    if((dem1b - dem1a) % 2 == 0) cnt++;
    while(i <= len){
        if(a[i - 1] == '1') dem1a--;
        if(a[i + b.length() - 1] == '1') dem1a++;
        if((dem1b - dem1a) % 2 == 0) cnt++;
        i++;
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