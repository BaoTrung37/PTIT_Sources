//
// Code By CodeWar :3
#include <bits/stdc++.h>
using namespace std;
typedef long long i64;
const int mod = 1e9+7;
#define pb push_back;
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;
vector <vector <int> > a (2005 , vector <int> (2005,0));
string s;
void solve(){
    cin >> s;
    int n = s.length();
    for(int i = 0 ; i < n ; i++)
        a[i][i] = 1;
    for(int i = 0; i < n - 1 ; i++){
        for(int j = 0 ; ; )
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