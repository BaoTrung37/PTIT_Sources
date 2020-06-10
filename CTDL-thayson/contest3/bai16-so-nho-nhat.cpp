/**
 *    authur: Bao Trung (Koi` Cute)
**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
#define all(x) (x).begin(), (x).end()
#define set_arr(a,n); int a[n+5]; for(int i=0;i<n;i++)cin>>a[i];
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;
const int mod = 1e9+7;
int s,d;
bool can(int d,int s){
    return(s >= 0 && s <= 9 * d);
}
void solve(){
    cin >> s >> d;
    if(9 * d < s || s < 1 && d > 1) cout  <<"-1\n";
    else{
        string min ="";
        int sum = s;
        for(int i = 0 ; i < d; i++){
            for(int j = 0 ; j < 10 ; j++){
                if((i > 0 || j > 0 || (d == 1 && j == 0)) && can(d - i - 1,sum - j)){
                    min += char('0' + j);
                    sum -= j;
                    break;
                }
            }
        }
        cout << min << '\n';
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