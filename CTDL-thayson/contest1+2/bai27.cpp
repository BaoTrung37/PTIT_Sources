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
int n,k,sum,a[100],vis[100];
bool OK;
void Try(int s,int cnt){
    if(OK) return;
    if(cnt == k){
        OK = true;
        return;
    }
    for(int i = 1; i <= n ; i++){
        if(vis[i] == false){
            vis[i] = true;
            if(s == sum){
                Try(0,cnt + 1);
                return;
            }
            if(s > sum)
                return;
            else 
                Try(s + a[i],cnt);
        }
        vis[i] = false;
    }
}   
void solve(){
    cin >> n >> k;
    sum = 0;
    OK = false;
    for(int i = 1; i <= n ; i++){
        cin >> a[i];
        vis[i] = false;
        sum += a[i];
    }
    if(sum % k != 0){
        cout << 0 << endl;
    }
    else{
        sum /= k;
        Try(0,0);
        cout <<(OK ? 1 : 0) << endl;
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