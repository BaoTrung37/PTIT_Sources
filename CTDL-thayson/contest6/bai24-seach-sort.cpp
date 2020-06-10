/**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;

int n,k,kt;

void tim(int a[],int k,int l,int r){
    if(kt == -1){
        int mid = (l + r)/ 2;
        if(a[mid] == k) kt = mid;
        else if(l < r){
            tim (a,k,l,mid - 1);
            tim (a,k,mid + 1, r);
        }
    }
}
void solve(){
    cin >> n >> k;
    kt = -1;
    int a[n + 1];
    for(int i = 0 ; i < n ; i++)
        cin >> a[i];
    tim(a,k,0,n - 1);
    cout << kt + 1 << '\n';
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    
    int t = 1; cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By CodeWar :3 (Bao Trung)