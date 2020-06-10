//
// Code By CodeWar :3
#include <bits/stdc++.h>
using namespace std;
typedef long long i64;
const int mod = 1e9+7;
#define pb push_back;
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;
int n , res , a[20] , d[20], s[20];

void update(){
    int kt[5];
    for(int i = 1 ; i <= 4 ; i++)
        kt[i] = s[i];
    sort(kt + 1, kt + 5);
    res = min(res , kt[4] - kt[1]);
}

void Try(int i){
    for(int j = 1 ; j <= 4 ; j++){
        if(d[j] < 3){
            d[j]++;
            s[j] += a[i];

            if(i == n)  update();
            else Try(i + 1);
            
            d[j]--;
            s[j] -= a[i];
        }
    }
}

void solve(){
    n = 12;
    res = 1e9;
    for(int i = 1 ; i <= n ; i++)  cin >> a[i];
    for(int i = 1 ; i <= 4 ; i++)  d[i] = 0, s[i] = 0;
    Try(1);
    cout << res;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t = 1;// cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By CodeWar :3