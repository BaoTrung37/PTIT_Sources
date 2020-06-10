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
int n;
void solve(){
    cin >> n;
    set_vect(a,n);
    vector <int> s; 
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n - i; j ++){
            s.push_back(a[j]);
            a[j] += a[j + 1];
        }
    }
    for(int i = s.size() - 1 , cnt = 1; i >= 0 ;){
        cout << "[";
        for(int j = i - cnt + 1; j <= i ; j++){
            cout << s[j];
            if(j < i) cout << ' ';
        }
        i -= cnt;
        cnt++;
        cout << "]";
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