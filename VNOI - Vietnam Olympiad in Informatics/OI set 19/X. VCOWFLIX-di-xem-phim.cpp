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
int n,c,MAX = -1;
int b[20],a[20];
void update(){
    int res = 0;
    for(int i = 0 ; i < n ; i++)
        res += a[i]*b[i];
    if(res > MAX && res <= c) MAX = res;
}
void Try(int i){
    for(int j = 0 ; j <= 1 ; j++){
        b[i] = j;
        if(i == n - 1)
            update();
        else Try(i + 1);
    }
}
void solve(){
    cin >> c >> n;
    b[0] = 0;
    for(int i = 0 ; i < n ; i++)
        cin >> a[i];
    Try(0);
    cout << MAX;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t = 1; //cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By CodeWar :3