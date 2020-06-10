//
// Code By CodeWar :3
#include <bits/stdc++.h>
using namespace std;
typedef long long i64;
const int mod = 1e9+7;
#define pb push_back;
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;
int n;
void solve(){
    cin >> n;
    queue <i64> q;
    q.push(9);
    while(1){
        i64 z = q.front();
        q.pop();
        if(z % n == 0){
            cout << z << '\n';
            break;
        }
        q.push(z * 10);q.push(z * 10 + 9);
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t = 1; cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By CodeWar :3