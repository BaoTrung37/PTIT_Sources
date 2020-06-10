/**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;

string s;
int a[1000004],dp[1000004];
void solve(){
    int Top = 0, res = 0;
    getline(cin,s);
    if(s == ""){
        cout << "0\n";
        return;
    }
    int n = s.length();
    s = " " + s;
    memset(dp,0,sizeof(dp));
    for(int i = 1 ; i <= n; i++){
        char c = s[i];
        if(c == '('){
            a[++Top] = i;
        }
        else if(Top != 0 && s[i] == ')'){
            dp[i] = dp[a[Top] - 1] + (i - a[Top] + 1);
            res = max(res,dp[i]);
            Top--;
        }
    }

    cout << res << '\n';
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    //cin.ignore();
    int t = 1; cin >> t;
    cin.ignore();
    while(t--){solve();}
    return 0;
}

// Code By CodeWar :3 (Bao Trung)