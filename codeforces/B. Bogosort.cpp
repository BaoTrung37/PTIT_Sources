//
// Code By CodeWar :3
#include <bits/stdc++.h>
#define pb push_back;
typedef long long i64;
const int mod = 1e9+7;
using namespace std;
int n,a[10000];
bool cmp(int x,int y){
    return x > y;
}
void solve(){
    cin >> n;
    for(int i = 0 ; i < n ; i++)
        cin >> a[i];
    sort(a,a+n,cmp);
    for(int i = 0 ; i < n ; i++)
        cout << a[i] << ' ';
    cout << endl;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By CodeWar :3