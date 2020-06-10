/**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define ii pair<int, int>
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;

string s,x;
int n;
void solve(){
    unordered_set <string> st;
    unordered_map <string,int> mp;
    cin >> n >> s >> x;
    for(int i = 0 ; i < n ; i++){
        string tmp;
        cin >> tmp;
        mp[tmp] = 0;
    } 
    

}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    
    int t = 1; cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By CodeWar :3 (Bao Trung)