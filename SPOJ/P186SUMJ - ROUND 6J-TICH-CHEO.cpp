//https://www.spoj.com/PTIT/problems/P186SUMJ/
#include <bits/stdc++.h>
#define pb push_back;
typedef long long i64;
typedef long i32;
const int mod = 1e9+7;
const int Max = 1e6+5;
using namespace std;
int n,m,res = 0;
vector < int > a;
vector < int > b;
i64 k;
int Search(vector <int > a, int l ,int r, int key){
	while(l <= r){
		int mid = (l + r)/2;
		if (a[mid] == key) return mid;
		else if(a[mid] > key) r = mid - 1;
		else l = mid + 1;
	}
	return -1;
}
void input(){
	cin >> n >> m >> k;
	for(int i = 0,x ; i < n ; i++){
		cin >> x;
		a.push_back(x);
	}
	for(int i = 0,x ; i < m ; i++){
		cin >> x;
		b.push_back(x);
	}
}
void solve(){
	input();
	for(int i = 0 ; i < n ; i++){
		int dem1 = 0,dem2 = 0, kt = k / a[i];
		int vt = Search(a,0,a.size()-1,a[i]); 
		while(vt != -1){
			dem1++;
			a.erase(a.begin() + vt);
			vt = Search(a,0,a.size()-1,a[i]);
		}
		cout << "dem1 " << dem1 << endl; 
		int vt2 = Search(b,0,b.size()-1,kt); 
		while(vt2 != -1){
			dem2++;
			b.erase(b.begin() + vt2);
			vt2 = Search(b,0,b.size()-1,kt);
		}
		cout << "dem2 " << dem2 << endl; 
		res += dem1*dem2;
	}
	cout << res;
}
int main(){
	solve();
	return 0;
}

