/*
    nếu b == 0
    if(a) in 0 (a times)
    else in 1 (c time)
    b != 0
        in 0  a-1 time
        in 01 (b --)
        in 1 c-1 time
    while(b --)
        in 0 , 1 , 0 ,...

*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;

int a,b,c;
void solve(){
    cin >> a >> b >> c;
    if(!b){
        if(a){
            for(int i = 0; i <= a ; i++)
                cout << 0;
            cout << '\n';
        }
        else {
            for(int i = 0 ; i <= c; i++)
                cout << 1;
            cout << '\n';
        }
    }
    else{
        for(int i = 0 ; i < a ; i++)
            cout << 0;
        cout << "01";
        b--;
        for(int i = 0 ; i < c; i++)
            cout << 1;
        int d = 0;
        while(b--){
            cout << d;
            d ^= 1; 
        }
        cout << '\n';
    }
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    
    int t = 1; cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By CodeWar :3 (Bao Trung)