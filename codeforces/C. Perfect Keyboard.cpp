//
// Code By CodeWar :3
#include <bits/stdc++.h>
#define pb push_back;
#define all(x) (x).begin(), (x).end()
typedef long long i64;
const int mod = 1e9+7;
using namespace std;
string s;
void solve(){
    cin >> s;
    int a[26] = {0};
    for(int i = 0 ; i < s.length() ; i++)
        a[s[i] - 'a'] = 1;
    string res (1,s[0]);
    int pos = 0;
    for(int i = 0 ; i < s.length() ; i++){
        if(a[s[i] - 'a']){
            
        }
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By CodeWar :3