//
// Code By CodeWar :3
#include <bits/stdc++.h>
using namespace std;
typedef long long i64;
const int mod = 1e9+7;
#define pb push_back;
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;
int a[10000],n,k;
void solve(){
    cin >> n >> k;
    for(int i = 1 ; i <= k ; i ++)
        cin >> a[i];
    int i = k;
    while( a[i] == n - k + i && i > 0) i--;
    if(i > 0){
        a[i]++;
        for(int j = i + 1 ; j <= k ; j++)
            a[j] = a[j - 1] + 1;
        for(i = 1 ; i <= k ; i++)
        cout << a[i] << ' ';
        cout << endl;
    }
    else {
        for(int i = 1 ; i <= k ; i++)
            cout << i << ' ';
        cout << endl;
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