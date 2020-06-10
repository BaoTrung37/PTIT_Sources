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
string a,b;
int k;
void solve(){
    cin >> k >> a >> b; 
    if(a.length() < b.length()) swap(a,b);
    reverse(all(a)); reverse(all(b));
    int x = a.length() - b.length();
    while(x--) b.push_back('0');
    int du = 0,tmp;
    string res ="";
    for(int i = 0 ; i < a.length() ; i++){
        tmp = a[i] - '0' + b[i] - '0' + du;
        du = tmp / k; tmp = tmp % k;
        res = char(tmp + '0') + res;
    }
    if(du > 0) res = char(du + '0') + res;
    res[res.length()] = '\0';
    cout << res << '\n';
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t = 1; //cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By CodeWar :3