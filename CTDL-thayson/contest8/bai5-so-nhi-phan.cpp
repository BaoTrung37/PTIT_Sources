/**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;

int n;
int tinh(string s){
    int res = 0,n= s.length();
    for(int i = 0 ; i < n; i++)
        if(s[i] == '1'){
            res += pow(2, n - i - 1);
        }
    return res;
}
void solve(){
    cin >> n;
    queue <string> q;
    q.push("1");
    while(1){
        string s = q.front();
        q.pop();
        cout << s << ' ';
        if(tinh(s) == n){
            cout << '\n';
            return;
        }
        
        q.push(s + "0");
        q.push(s + "1");
    }
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    
    int t = 1; cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By CodeWar :3 (Bao Trung)