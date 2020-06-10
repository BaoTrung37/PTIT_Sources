/**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;

int n;
bool cmp(string s ,string x){
    int n = s.length();
    int m = x.length();
    if(n == m) return (s < x);
    return (n < m);
}
void solve(){
    cin >> n;
    queue <string> q;
    vector <string> zz;
    q.push("4");
    q.push("5");
    while(n--){
        string tmp = q.front();
        q.pop();
        string res = tmp;
        reverse(all(res));
        zz.push_back(tmp + res);
        q.push("4" + tmp);
        q.push("5" + tmp);
    }
    sort(all(zz),cmp);
    // for(auto z : zz)
    //     cout << z << ' ';
    for(int i = 0 ; i < zz.size() ; i++)
        cout << zz[i] << ' ';
    cout << '\n';
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    
    int t = 1; cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By CodeWar :3 (Bao Trung)