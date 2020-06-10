//
// Code By CodeWar :3
#include <bits/stdc++.h>
using namespace std;
typedef long long i64;
const int mod = 1e9+7;
#define pb push_back;
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<int>a(n); for(int i=0;i<n;i++)cin>>a[i];
int n;
string s,x,res;
void solve(){
    while(1){
        cin >> n ;
        if(n == 0) break;
        cin >> s >> x >> res;
        int cnt = 0 , OK = 1;
        while(1){
            if(OK == 0) break;
            cnt++;
            if(cnt > 50){
                OK = 0;
                break;
            }
            string tmp ="";
            for(int i = 0 ; i < n ; i++){
                tmp += x[i];
                tmp += s[i];
            }
            if(tmp == res){
                OK = 1;
                break;
            }
            else{
                s.clear();
                x.clear();
                s = tmp.substr(0,n);
                x = tmp.substr(n);
            }   
        }
        if(OK == 0) cout << -1 << endl;
        else cout << cnt << endl;
    }
}
 
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t = 1;//cin >> t;
    while(t--){solve();}
    return 0;
}
 
// Code By CodeWar :3  