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
ll res;
priority_queue <int,vector <int>, greater <int>> pq;
void solve(){
    cin >> n;
    while(n--){
        int x ; cin >> x;
        pq.push(x);
    }
    res = 0;
    while(!pq.empty()){
        int l = pq.top(); pq.pop();
        int r = pq.top(); pq.pop();
        res = (res + (l + r));
        if(!pq.empty()) pq.push((l + r));
    }
    cout << res << "\n";
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t = 1; cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By CodeWar :3