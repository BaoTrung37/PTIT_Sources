//https://www.geeksforgeeks.org/make-largest-palindrome-changing-k-digits/
// Code By CodeWar :3
#include <bits/stdc++.h>
using namespace std;
typedef long long i64;
const int mod = 1e9+7;
#define pb push_back;
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;
int n,k;
string s;
void solve(){
    cin >> n >> k >> s;
    string tmp = s;
    int l = 0 , r = s.length() - 1;
    while( l < r){
        if(s[l] != s[r]){
            tmp[l] = tmp[r] = max(s[l],s[r]);
            k--;
        }
        l++;
        r--;
    }
    if(k < 0){
        cout << - 1;
        return;
    }
    l = 0 , r = s.length() - 1;
    while(l <= r){
        if(l == r){
            if( k > 0)
                tmp[l] = '9';
        }
        if(tmp [l] < '9'){
            if(k >= 2 && tmp [l] == s[l]  && tmp [r] == s[r]){
                k-= 2;
                tmp[l] = tmp[r] = '9';
            }
            else if(k >= 1 && (tmp[l] != s[l] || tmp[r] != s[r])){
                k--;
                tmp[l] = tmp[r] == '9';
            }
        }
        l++;
        r--;
    }
    cout << tmp;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t = 1;// cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By CodeWar :3