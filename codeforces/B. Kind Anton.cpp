/**
 *    authur: Bao Trung (Koi Cute)
**/
#include <bits/stdc++.h>
using namespace std;
typedef long long i64;
const int mod = 1e9+7;
#define pb push_back;
#define all(x) (x).begin(), (x).end()
#define set_arr(a,n); int a[n+5]; for(int i=0;i<n;i++)cin>>a[i];
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;
int n;
void solve(){
    cin >> n;
    set_vect(a,n);
    set_vect(b,n);
    bool check1 = false,check_1=false;
    for(int i = 0 ; i < n; i++){
        if(b[0] != a[0]){
            cout<< "NO" <<endl ; return;
        }
        if(b[i]>a[i] && check1 == false){
            cout<<"NO"<<endl; return ;
        }
        if(b[i]<a[i] && check_1 == false){
            cout<<"NO"<<endl;return;
        }
        if(a[i] == 1)
            check1 = true;
        if(a[i] == -1)
            check_1=true;
    }
     cout<<"YES"<<endl;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t = 1; cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By CodeWar :3