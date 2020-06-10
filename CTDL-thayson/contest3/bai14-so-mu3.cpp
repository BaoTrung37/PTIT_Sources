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
vector <string> Cb;
string s;
string toString(ll n){
	string s = "";
	while(n){
		char c = '0' + n % 10;
		s = c + s;
		n /= 10;
	}
	return s;
}
void input(){
    Cb.push_back("0");
    for(ll i = 1 ; i <= 1e6; i++){
        Cb.push_back(toString(i * i * i));
    }
    reverse(all(Cb));
}
void solve(){
    cin >> s;
    for(int i = 0 ; i < Cb.size() ;i++){
        if(Cb[i].size() > s.size()) continue;
        if(Cb[i].size() == s.size()){
            if(Cb[i] == s) {
                cout << s << '\n';
                return;
            }
            else continue;
        }
        int cnt = 0;
        for(int j = 0 ; j < s.length() ; j++){
            if(Cb[i][cnt] == s[j])
                cnt++;
            if(cnt == Cb[i].size()){
                cout << Cb[i] << '\n';
                return;
            }
                
        }
    }
    cout << "-1\n";
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    input();
    int t = 1; cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By CodeWar :3
