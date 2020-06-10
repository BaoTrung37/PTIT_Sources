/**
 *    authur: Bao Trung (Koi` Cute)
**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
#define all(x) (x).begin(), (x).end()
#define set_arr(a,n); int a[n+5]; for(int i=0;i<n;i++)cin>>a[i];
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;
const int mod = 1e9+7;
int n;
string s;
void solve(){
    cin >> n >> s;
    int d[256] = {0},vis[10005] = {0};
    for(int i = 0 ; i < s.length() ; i++)
        d[s[i] - '0']++;
    sort(d,d + 256,greater<int>());
    for(int i = 0 ; i < 256 ; i++){
        int cnt = d[i];
        int tl = 0;
        while(vis[tl]) tl++;
        for(int j = 0 ; j < cnt ; j++){
            if(tl + (j * n) >= s.length()){
                cout << "-1\n";
                return;
            }
            vis[tl + j * n] = 1;
        }
    }
    cout << 1 << '\n';
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t = 1; cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By CodeWar :3