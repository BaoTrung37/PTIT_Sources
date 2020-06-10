/**
 *    authur: Bao Trung <3
 * https://codeforces.com/group/FLVn1Sc504/contest/274501/problem/F
**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;
const int Nmax = 1002;
int n,a[Nmax],L[Nmax],lmax,res = 0;
void solve(){
    cin >> n;
    for(int i = 0 ; i < n ; i++)    
        cin >> a[i];
    for(int i = 0; i < n ; i++){
        lmax = 0;
        for(int j = 0 ; j < i ; j++){
            if(a[j] < a[i] && lmax < L[j])
                lmax = L[j];
        }
        L[i] = lmax + 1;
        res =  max(res,L[i]);
    }
    cout << res;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t = 1;// cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By CodeWar :3