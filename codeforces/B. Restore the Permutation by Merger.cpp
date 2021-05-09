/**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define ii pair<int, int>
#define X first
#define Y second
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;
const int nmax = 10005;

int n,a[nmax];
void solve(){
    cin >> n;
    vector <int>a(n*2);
    map<int,int>mp;
    for(int i = 0 ; i < n * 2    ;i++){
         cin >> a[i];
         mp[a[i]]++;
         if(mp[a[i]] == 1) cout << a[i] << ' ';
    }

    cout << '\n';
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    
    int t = 1; cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By CodeWar :3 (Bao Trung)