/*
    kiểm tra từng phần tử cách k vị trí
    
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;

int n,k;
string s;
void solve(){
    cin >> n >> k >> s;
    int sum = 0,res = 1 << 29;
    for(int i = 0 ; i < n ; i++)
        sum += s[i] - '0';
    for(int i = 0 ; i < k ; i++){
        int cnt = 0;
        for(int j = i ; j < n ; j += k){
            if(s[j] == '1') cnt--;
            else cnt++;
            cnt = min(cnt,0);
            res = min(res, sum + cnt);
        }
    }
    cout << res << '\n';
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    
    int t = 1; cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By CodeWar :3 (Bao Trung)