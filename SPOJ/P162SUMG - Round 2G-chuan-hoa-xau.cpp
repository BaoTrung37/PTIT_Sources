//
#include <bits/stdc++.h>
#define pb push_back;
typedef long long i64;
typedef long i32;
const int mod = 1e9+7;
const int Max = 1e6+5;
using namespace std;
string s;
void solve(){
    cin >> s;
    int cntL = 0,cntU = 0;
    // string resL = "";
    // string resU = "";
    for(int i = 0 ; i < s.length() ; i++){
        // resL = resL + tolower(s[i]);
        // resU = resU + toupper(s[i]);
        if(s[i] >= 'a' && s[i] <= 'z')
            cntL++;
        else if(s[i] >= 'A' && s[i] <= 'Z')
            cntU++;
    }
    if(cntL >= cntU) 
        for(int i = 0 ; i < s.length() ; i++)
            s[i] = tolower(s[i]);
    else
        for(int i = 0 ; i < s.length() ; i++)
            s[i] = toupper(s[i]);
    cout << s;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    solve();
    return 0;
}
