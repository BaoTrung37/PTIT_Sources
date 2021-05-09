/*
    t = a + b + c + .. + a * b + a * c + .. + a * b * c + ...
    t = (a + 1) * (b + 1) * (c + 1) * ... - 1
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define ii pair<int, int>
#define X first
#define Y second
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<int>a(n); for(int i=0;i<n;i++)cin>>a[i];
#define db(x) cerr << #x << " = "  << (x) << ' ';
const int N = 100005;
const int mod = 1e9+7;

string s;
ll res,tmp;
int cnt;
void solve(){
    cin >> s;
    vector <int> t;
    for(int i = 0 ; i <= s.length() ; i++){
        if(s[i] == 'a') cnt++;
        else if(s[i] == 'b' || i == s.length()){
            if(cnt > 0){
                t.push_back(cnt);
                cnt = 0;
            }
           
        }
    }
    if(t.size() == 0){
        cout << 0;
        return;
    }
    res = 1;
    for(int i = 0 ; i < t.size() ; i++){
        res = (res * (t[i] + 1)) % mod;
    }
        
    cout << res - 1;
}   

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    
    int t = 1;//cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By Pain (Bao Trung)