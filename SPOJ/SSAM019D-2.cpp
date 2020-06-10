
#include<bits/stdc++.h>
const int mod=1e9+7;
#define fz(i,n) for(int i=0; i<n; i++)
#define fo(i,n) for(int i=1; i<=n; i++)
#define fv(i,n,val) for(int i=0; i<n; i+=val)
#define mp make_pair
#define fi first
#define se second
#define sz size()
typedef long long ll;
typedef std:: vector < int > vi;
typedef std:: vector < ll > vll;
using namespace std;

int n; string res = "";
void Input(){
	cin >> n;
}
bool Final( string res){
	for(int i=0; i< res.sz; i++)
		if( res[i] == '0')
			return false;
	return true;
}
int remainder( string s, int n){
	int re = 0;
	for(int i=0; i<s.sz; i++)
		re = (re*10 + s[i] - '0')%n;
	return re;
}
void Solution(){
	int l = 1;
	res = "9";
	while(  remainder(res, n)){
		if( Final( res) ){
			string s1 = "9";
			string s2(l++,'0');
			res = s1 + s2;
			continue;
		}
		int idx = res.sz - 1;
		while( res[idx] =='9' )
			res[idx--] = '0';
		res[idx] = '9';
	}
	cout << res << endl;
}

int main(){

ios::sync_with_stdio( false );
cin.tie( NULL );

int t; cin >> t; cin.ignore();
while( t-- ){
	Input();
	Solution();
}

return 0;

}


