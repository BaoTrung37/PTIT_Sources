/**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;

int n,m;
bool check(int n){
    int d[10] = {0};
    while(n > 0){
        d[n % 10]++;
        n /= 10;
    }
    for(int i = 0 ; i <= 9 ; i++)
        if((i <= 5 && d[i] > 1 )|| (i > 5 && d[i] > 0))
            return false;
    return true;
}
void solve(){
    cin >> n >> m;
    map <int,int> mp;
    int cnt = 0;
    for(int i = n ; i <= m ; i++){
        if(check(i))
            mp[i]++;
    }
    cout << mp.size() << '\n';
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    
    int t = 1; cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By CodeWar :3 (Bao Trung)