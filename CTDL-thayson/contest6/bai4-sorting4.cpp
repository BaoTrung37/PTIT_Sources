/**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;

int n,m,a[100005],b[100005];
void solve(){
    cin >> n >> m;
    vector <int> res1,res2;
    map <int,int> mp;
    for(int i = 0 ; i < n ; i++){
        cin >> a[i];
    }
    for(int i = 0 ; i < m ; i++){
        cin >> b[i];
    }
    for(int i = 0 ; i < n ; i++){
        mp[a[i]]++;
        if(mp[a[i]] == 1) res1.push_back(a[i]);     
    }
    for(int i = 0 ; i < m ; i++){
        mp[b[i]]++;
        if(mp[b[i]] == 1) res1.push_back(b[i]);
        if(mp[b[i]] == 2) res2.push_back(b[i]);
    }
    sort(all(res1)); sort(all(res2));
    for(auto z : res1)
        cout << z << ' ';
    cout << '\n';
    for(auto z : res2)
        cout << z << ' ';
    cout << '\n';
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    
    int t = 1; cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By CodeWar :3 (Bao Trung)