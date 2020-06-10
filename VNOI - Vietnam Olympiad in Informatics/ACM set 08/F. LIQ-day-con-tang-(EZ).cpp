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
    int a[30005], L[30005], lmax , maxx = INT16_MIN;
    for(int i = 0 ; i < n ; i++){
        cin >> a[i];
        L[i] = 0;
    }
    for(int i = 0 ; i < n ; i++){
        lmax = 0;
        for(int j = 0 ; j < i ; j++){
            if(a[i] > a[j] && L[j] > lmax)
                lmax = L[j];
        }
        L[i] = lmax + 1;
        if(maxx < L[i]) maxx = L[i];
    }
    cout << maxx << endl;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t = 1; //cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By CodeWar :3