/**
 *    authur: Bao Trung (Koi Cute)
**/
#include <bits/stdc++.h>
using namespace std;
typedef long long i64;
const int mod = 1e9+7;
#define pb push_back;
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;
int k;
string s;
void Try(int k,string &res){
    if(k == 0)
        return;
    int n = s.length();
    for(int i = 0 ; i < n - 1; i++){
        for(int j = i + 1; j < n ; j++){
            if(s[i] < s[j]){
                swap(s[i],s[j]);
                if(s.compare(res) > 0){
                    res = s;
                }
                Try(k - 1,res);
                swap(s[i],s[j]);
            }
        }
    }    
}
void solve(){
    cin >> k >> s;
    string res = s;
    Try(k,res);
    cout << res << endl;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t = 1; cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By CodeWar :3