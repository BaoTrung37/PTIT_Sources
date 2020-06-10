/**
 *    authur: Bao Trung <3
 * https://www.spoj.com/PTIT/problems/NTSEQS2/
**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;
const int mod = 1e9+7;

int n,s,a[202],dp[100004];

void solve(){
    cin >> n >> s;
    for(int i = 0 ; i < n ; i++)   
        cin >> a[i];
    dp[0] = 1;
    for(int i = 0 ; i < n ; i++){
        for(int j = s ; j >= 1 ; j--){
            if(j >= a[i] && dp[j - a[i]] == 1)
                dp[j] = 1;
        }
    }
    if(dp[s] == 1) cout << "YES";
    else cout << "NO";
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t = 1;// cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By CodeWar :3