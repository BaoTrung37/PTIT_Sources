/**
 *    authur: Bao Trung (Koi` Cute)
 * https://codeforces.com/group/FLVn1Sc504/contest/274816/problem/G
**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
#define all(x) (x).begin(), (x).end()
#define set_arr(a,n); int a[n+5]; for(int i=0;i<n;i++)cin>>a[i];
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;
const int mod = 1e9+7;
int n;
int a[1000000] = {0};
string sinh(int n){
    
    for(int i = 2 ; i * i <= 1000000; i++)
        if(a[i] == 0)
            for(int j = i * i ; j <= 1000000 ; j += i)
                a[j] = 1;
    string res = "";
    for(int i = 2,cnt = 0 ;  ; i++){
        if(a[i] == 0)
            res += to_string(i),cnt++;
        if(cnt == n)
            break;
    }
    return res;
}
void solve(){
    cin >> n;
    string Prime;
    Prime = sinh(n);
    for(int i = 0; ; ){

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