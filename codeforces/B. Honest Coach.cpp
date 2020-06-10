#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int n,a[100004];
void solve(){
	cin >> n;
    for(int i = 0 ; i < n ; i++)
        cin >> a[i];
    sort(a,a+n);
    int nmin = 1e7;
    for(int i = 0 ; i < n - 1 ; i++)
        nmin = min(nmin, - a[i] + a[i + 1]);
    cout << nmin << '\n';
}   

int main(){
    int t = 1; cin >> t;
    while(t--){solve();}
    return 0;
}
// code wwar