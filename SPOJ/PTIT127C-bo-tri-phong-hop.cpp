//
#include <bits/stdc++.h>
typedef long long i64;
typedef long i32;
const int mod = 1e9+7;
const int Max = 1e6+5;
using namespace std;
int n;
struct gio{
	int start;
	int finish;
} typedef timeh;

int cmp( timeh a, timeh b){
	if(a.finish > b.finish) 	
		return 0;
	else if (a.finish == b.finish && a.start > b.start) 
		return 0;
	return 1;
}
void solve(){
	cin >> n;
	timeh ds[10004];
	for ( int i = 0 ; i < n ; i++){
		cin >> ds[i].start >> ds[i].finish; 
	}
	sort(ds,ds+n,cmp);
	int count = 0 ;
	int x = ds[0].start;
	for(int i = 0 ; i < n ; i++){
		if ( x <= ds[i].start ){
			count++;
			x = ds[i].finish;
		}
	}
	cout << count;
}
int main(){
	solve();
	return 0;
}
