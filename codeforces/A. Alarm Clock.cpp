/*
    nếu b >= a thì trả về b
    nếu c <= d thì trả về -1
    kiểm tra  tmp = (a - b) % (c - d) 
    trả về b + tmp * c
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;

ll a,b,c,d;
void solve(){
    cin >> a >> b >> c >> d;
    if(b >= a){
        cout << b << '\n';
        return;
    }
    if(c <= d){
        cout << "-1\n";
        return;
    }
    ll res;
    if((a - b) % (c - d) == 0){
        ll tmp = (a - b) / (c - d);
        res =  b + c * tmp;
    }
    else{
        ll tmp = (a - b) / (c - d) + 1;
        res =  b + c * tmp;
    }
    cout << res << '\n';
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    
    int t = 1; cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By CodeWar :3 (Bao Trung)