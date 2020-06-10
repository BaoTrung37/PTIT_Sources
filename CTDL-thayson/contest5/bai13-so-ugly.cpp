/**
 *    authur: Bao Trung
**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;

int n;
vector <ll> dp;
void in(){
    ll i2 = 0 , i3 = 0 , i5 = 0;
    ll n2 = 2, n3 = 3,n5 = 5;
    ll tmp = 0;
    dp.push_back(1);
    for(int i = 1 ; i <= 10005 ; i++){
        tmp = min(n2,min(n3,n5));
        dp.push_back(tmp);
        if(tmp == n2){
            i2++;
            n2 = dp[i2]*2;
        }
        if(tmp == n3){
            i3++;
            n3 = dp[i3]*3;
        }
        if(tmp == n5){
            i5++;
            n5 = dp[i5]*5;
        }
    }
}

void solve(){
    cin >> n;
    cout << dp[n - 1] << '\n';
   
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    in();
    int t = 1; cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By CodeWar :3