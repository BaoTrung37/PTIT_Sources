#include <bits/stdc++.h>
using namespace std;
//#include <ext/pb_ds/tree_policy.hpp>
//using namespace __gnu_pbds;
typedef long long ll;
#define vi vector
#define ii pair<int, int>
#define fi first
#define se second
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define set_vect(a,n); vector<int>a(n); for(int i=0;i<n;i++)cin>>a[i];
#define db(x) cerr << #x << " = "  << (x) << '\n';
	
#define F_OR(i, a, b, s) for (int i=(a); (s)>0?i<(b):i>(b); i+=(s))
#define F_OR1(e) F_OR(i, 0, e, 1)
#define F_OR2(i, e) F_OR(i, 0, e, 1)
#define F_OR3(i, b, e) F_OR(i, b, e, 1)
#define F_OR4(i, b, e, s) F_OR(i, b, e, s)
#define GET5(a, b, c, d, e, ...) e
#define F_ORC(...) GET5(__VA_ARGS__, F_OR4, F_OR3, F_OR2, F_OR1)
#define FOR(...) F_ORC(__VA_ARGS__)(__VA_ARGS__)
#define EACH(x, a) for (auto& x: a)

template<class A> void read(vector <A>& v);
template<class A, size_t S> void read(array <A, S>& a);
template<class T> void read(T& x) {
	cin >> x;
}
	void read(double& d) {
	string t;
	read(t);
	d=stod(t);
}
void read(long double& d) {
	string t;
	read(t);
	d=stold(t);
}
template<class H, class... T> void read(H& h, T&... t) {
	read(h);
	read(t...);
}
template<class A> void read(vector <A>& x) {
	EACH(a, x)
		read(a);
}
string to_string(char c) {
	return string(1, c);
}
string to_string(bool b) {
	return b? "true":"false";
}
string to_string(const char* s) {
	return string(s);
}
string to_string(string s) {
	return s;
}
string to_string(vector<bool> v) {
	string res;
	FOR((int)(v).size())
		res+=char('0'+v[i]);
	return res;
}
template<size_t S> string to_string(bitset<S> b) {
	string res;
	FOR(S)
		res+=char('0'+b[i]);
	return res;
}
template<class T> string to_string(T v) {
	bool f=1;
	string res;
	EACH(x, v) {
		if(!f)
			res+=' ';
		f=0;
		res+=to_string(x);
	}
	return res;
}
template<class A> void write(A x) {
	cout << to_string(x);
}
template<class H, class... T> void write(const H& h, const T&... t) {
	write(h);
	write(t...);
}
void print() {
	write("\n");
}
template<class H, class... T> void print(const H& h, const T&... t) { 
	write(h);
	if(sizeof...(t))
		write(' ');
	print(t...);
}
void dbg_out() { cerr << endl; }
template<typename Head, typename... Tail> void dbg_out(Head H, Tail... T) { cerr << ' ' << H; dbg_out(T...); }
void DBG() {
	cerr << "]" << endl;
}
template<class H, class... T> void DBG(H h, T... t) {
	cerr << to_string(h);
	if(sizeof...(t))
		cerr << ", ";
	DBG(t...);
}
#ifdef ONLINE_JUDGE
#define dbg(...) cerr << "LINE(" << __LINE__ << ") -> [" << #__VA_ARGS__ << "]: [", DBG(__VA_ARGS__)
#else
#define dbg(...) 0
#endif
const int N = 3e6+5;
const int mod = 1e9+7;
/**/

vector <char> xx = {'0','1','2','5','8'};
vector <string> res;
void init(){
	for(int i = 0; i < xx.size(); i++){
		string s = to_string(xx[i]);
		for(int j = 0; j < xx. size(); j++){
			res.push_back(s + xx[j]);
		}
	}
}
void solve(){
	int hh,mm;
	read(hh,mm);
	string tmp,s1 = "",s2 = "";
	read(tmp);
	for(int i = 0, ok = 1; i < tmp.size(); i++){
		if(tmp[i] == ':'){
			ok ^= 1;
			continue;
		}
		if(ok == 1) s1 += tmp[i];
		if(ok == 0) s2 += tmp[i];
	}
	auto stringtoint = [&](string s){
		int tmp = 0;
		FOR(i,s.size()){
			tmp = tmp * 10 + (s[i] - 48);
		}
		return tmp;
	};
	auto check = [&](string s, string x,int hh,int mm){
		return (stringtoint(s) < hh && stringtoint(x) < mm);
	};
	auto check2 = [&](string s,string x){
		return(stringtoint(s) >= stringtoint(x));
	};
	auto doi = [&](string s,string x){
		return (stringtoint(s) * 60 + stringtoint(x));
	};
	string x1,x2;
	int minn = 1e9; 
	FOR(i,res.size()){
		string t1, t2;
		FOR(j,res.size()){
			t1 = res[i];
			t2 = res[j];
			string t3 = t1;
			reverse(all(t3));
			string t4 = t2;
			reverse(all(t4));
			dbg(t3,t4);
			if(check(t1,t2,hh,mm) && check2(t1,s1) && check2(t2,s2) && check(t4,t3,hh,mm)){
				x1 = t1;
				x2 = t2;
				print(x1 + ":" + x2);
				return;
				//minn = abs(doi(s1,s2) - doi(t1,t2));
			}
		}
	}
	print("00:00");
}

int main(){
	ios_base::sync_with_stdio(0);cin.tie(0);
	init();
	int t = 1; cin >> t;
	for(int i = 1; i <= t; i++){
		solve();
		//cerr << "\nTime elapsed: " << 10 * clock() / CLOCKS_PER_SEC << " ms\n";
	}
	return 0;
}

// Code By Bao Trung4