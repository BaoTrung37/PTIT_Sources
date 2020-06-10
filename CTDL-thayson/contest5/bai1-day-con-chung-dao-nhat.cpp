/**
 *    authur: Bao Trung <3
 * https://www.spoj.com/PTIT/problems/BCSTR/
 * 
**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;
const int mod = 1e9+7;
string s,x;
void solve(){
    cin >> s >> x;
    int n = s.length(), m = x.length();
    vector <vector <int> > res(n + 1,vector <int> (m + 1 , 0));
    for(int i = 1 ; i <= n ; i++){
        for(int j = 1 ; j <= m ; j++){
            if(s[i - 1] == x[j - 1]){
                res[i][j] = res[i - 1][j - 1] + 1;
            }
            else{
                res[i][j] = max(res[i - 1][j] , res[i][j - 1]);
            }
        }
    }
    cout << res[n][m] << '\n';
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t = 1; cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By CodeWar :3