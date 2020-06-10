//
// Code By CodeWar :3
#include <bits/stdc++.h>
using namespace std;
typedef long long i64;
const int mod = 1e9+7;
#define pb push_back;
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;

void solve(){
    int stt;
		cin >> stt;
		string s;
		cin >> s;
		i64 n = s.size();
		bool kt = false;
		i64 i = n-2;
		while(i>=0 && s[i] >=s [i+1]){
			i--;
		}
		if(i >= 0){
			i64 k = n-1;
			while(s[i]>=s[k]){
				k--;
			}
			swap(s[i],s[k]);
			i64 l = i+1;
			i64 r = n-1;
			while(l <= r){
				swap(s[l],s[r]);
				l++;
				r--;
			}
		}
		else{
			kt=true;
		}
		if(kt==true){
			cout<<stt<<" BIGGEST"<<endl;
		}
		else{
			cout<<stt<<" "<<s<<endl;
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