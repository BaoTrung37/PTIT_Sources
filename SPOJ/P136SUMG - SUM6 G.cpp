//
// Code By CodeWar :3
#include <bits/stdc++.h>
using namespace std;
typedef long long i64;
const int mod = 1e9+7;
#define pb push_back;
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;
int n,c;
void solve(){
    cin >> n >> c;
    set_vect(a,n);
    cin >> n;
    pair <int,int> pii[n];
    for(int i = 0 ; i < n ; i++)
        cin >> pii[i].first >> pii[i].second;
    for(int i = 0 ; i < n ; i++){
        int nmax = -1, imax , d[c] = {0};
        for(int j = pii[i].first - 1; j < pii[i].second ; j++){
            d[a[j]]++;
            if(d[a[j]] > nmax){
                nmax = d[a[j]];
                imax = a[j] ;
            }
        }
        if(nmax > (pii[i].second - pii[i].first + 1) / 2){
            cout << "yes" << ' ' << imax << endl;
        }
        else cout << "no" << endl;
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