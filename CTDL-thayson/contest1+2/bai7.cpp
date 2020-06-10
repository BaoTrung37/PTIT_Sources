//
// Code By CodeWar :3
#include <bits/stdc++.h>
using namespace std;
typedef long long i64;
const int mod = 1e9+7;
#define pb push_back;
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;
int n,k,x[1000];
void solve(){
    bool OK = true;
    cin >> n;
    k = 1; x[k] = n;
    //
    while(OK){
        cout << "(";
        for(int i = 1 ; i <= k ; i++){
            cout << x[i];
            if(i < k) cout << ' ';
        }
        cout << ") ";
        int i = k,j,R,S,D;
        while(i > 0 && x[i] == 1) i--;
        if(i == 0){
            OK = false;
        }
        else{
            x[i]--;
            D = k - i + 1;
            R = D / x[i];
            S = D % x[i];
            k = i;
            if (R > 0){
                for(int j = i + 1 ; j <= i + R; j++)
                    x[j] = x[i];
                k = k + R;
            }
            if (S > 0){
                k = k + 1; x[k] = S;
            }
        }
    }
    cout << endl;
}   

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t = 1; cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By CodeWar :3