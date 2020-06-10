/**
 *    authur: Bao Trung <3
 * https://www.spoj.com/PTIT/problems/P197PROC/
**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;
const int mod = 1e9+7;
int n;
ll sum,MAX = -1;
void solve(){
    cin >> n;
    set_vect(a,n);
    for(int i = 0 ; i < n ; i++){
        sum += a[i];
        if(sum < 0) sum = 0;
        MAX = max(MAX,sum);
    }
    cout << MAX;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t = 1; //cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By CodeWar :3