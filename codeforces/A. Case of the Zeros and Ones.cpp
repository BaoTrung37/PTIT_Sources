//
// Code By CodeWar :3
#include <bits/stdc++.h>
#define pb push_back;
typedef long long i64;
const int mod = 1e9+7;
using namespace std;
int n;
string s;
void solve(){
    cin >> n >> s;
    for(int i = 0 ; i < s.size() ; i++){
        while((s[i] == '0' && s[i+1] == '1' || s[i] == '1' && s[i+1] == '0' ) && s.size() > 0){
            s.erase(i,2);
            i--;
        }
    }
    cout << s.length();
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t = 1; //cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By CodeWar :3