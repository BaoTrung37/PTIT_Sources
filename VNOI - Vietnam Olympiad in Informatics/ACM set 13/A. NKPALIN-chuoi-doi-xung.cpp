/**
 *    authur: Bao Trung
 * https://codeforces.com/group/FLVn1Sc504/contest/274825/problem/A
 * https://vn.spoj.com/problems/NKPALIN/
**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;

string s;
string lcs(string s,string x){
    int n = s.length(), m = x.length();
    s = ' ' + s;
    x = ' ' + x;
    vector<vector<int>> tmp (n + 1, vector <int> (m + 1, 0));
    for(int i = 1 ; i <= n ; i++){
        for(int j = 1 ; j <= m ; j++){
            if(s[i] == x[j])
                tmp[i][j] = tmp[i - 1][j - 1] + 1;
            else tmp[i][j] = max(tmp[i - 1][j],tmp[i][j - 1]);
        }
    }
    string res ="";
    while(tmp[n][m] > 0){
        if(s[n] == x[m]) res += s[n],n--,m--;
        else if(tmp[n][m] == tmp[n - 1][m]) n--;
        else m--;
    }
    reverse(all(res));
    return res;
}
void solve(){
    cin >> s;
    string x = s;
    reverse(all(x));
    cout << lcs(s,x);
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int t = 1; //cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By CodeWar :3