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
int n,k;
int lower_bound1(vector <int> a,int n,int k){
    int l = 0, r = n - 1;
    while(l <= r){
        int mid = (l + r) / 2;
        if(a[mid] == k) return (mid + 1);
        else if (a[mid] > k) r = mid - 1;
        else l = mid + 1;
    }
    return -1;
}
void solve(){
    cin >> n >> k;
    set_vect(a,n);
    if(lower_bound1(a,n,k) != -1) cout << lower_bound1(a,n,k);
    else cout << "NO";
    cout << '\n';
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t = 1; cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By CodeWar :3