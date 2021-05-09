/**
 *    authur: Bao Trung <3
**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll,ll> pii;
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;
const int mod = 1e9+7;
int a,b,q;
void solve(){
    cin >> a >> b >> q;
    pii z[q];
    for(int i = 0 ; i < q ; i++)
        cin >> z[i].first >> z[i].second;
    int index = 0;
    while(q--){
        ll l = z[index].first;
        ll r = z[index].second;
        ll res = 0;
        ll check1 = (l % a) % b;
        ll check2 = (l % b) % a;
        ll check3 = (r % a) % b;
        ll check3 = (r % b) % a;
        l++;
        while(l < r){
            if((l % a) % b == (l % b) % a)
                break;
            else{
                l++;
                res++;
            }
        }
        if()
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t = 1; //cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By CodeWar :3