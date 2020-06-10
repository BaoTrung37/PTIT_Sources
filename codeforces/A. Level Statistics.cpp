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
void solve(){
    cin >> n;
    vector<pii>a(n);
    for(auto &i : a)    cin >> i.first >> i.second;
    if(a[0].first < a[0].second){
        cout << "NO" << endl;
        return;
    }
    for(int i = 1; i < n ; i++){
        
        if(a[i].first < a[i - 1].first || a[i].second < a[i - 1].second || (a[i].first - a[i - 1].first) < a[i].second - a[i - 1].second){
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
    // for(int i = 0 ; i < a.size() ; i++)
    //     cout << a[i].first << ' ' << a[i].second << "\n";
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t = 1; cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By CodeWar :3