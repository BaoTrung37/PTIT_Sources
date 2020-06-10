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
int n,k,s,C[30],res;
void Result(){
    int kq = 0;
    for(int i = 1 ; i <= k ; i++)
        kq += C[i];
    if(kq == s) res++;
}
void Try(int i){
    for(int j = C[i - 1] + 1 ; j <= n - k + i ; j++){
        C[i] = j;
        if(i == k) Result();
        else Try(i + 1);
    }
}
void solve(){
    while(1){
        cin >> n >> k >> s;
        if(n == 0 && k == 0 && s == 0)
            return;
        for(int i = 1 ; i <= k ; i++)
            C[i] = i;
        res = 0;
        Try(1);
        cout << res << endl;
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