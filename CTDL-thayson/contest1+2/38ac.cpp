//Code By PMD
#include<bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
/*
	voi so nguyen duong m bat ki 
	m = (p1^c1)* (p2^c2)*...*(pk^ck) voi p la cac thua so nguyen to.
	( p1 < p2 < ... < pk ) 
	dat n la` so uoc cua m
	-> n = (c1 + 1)*(c2 + 1)*...*(ck+1) 
	tim` các bộ c1,c2,..ck  thoa man tich bang n .
	tu` do tim m min.
*/
int n;
long long res;
int p[] = {2,3,5,7,11,13,17,19,23};
bool prime(int n){
	if( n < 2 ) return false;
	for(int i = 2 ; i <= sqrt(n) ; i++){
		if( n % i == 0) return false;
	}
	return true;
}
void Try(int i, int m , vector<int> c){
	if( m > n ) return;
	if( m == n && c.size() != 0){
		long long tmp = 1;
		for(int k = 0 ; k < c.size() ; k++){
			long long z = tmp;
			tmp *= pow(p[k],c[k]);
			if( tmp < 0 || tmp < z ) return; // kiem tra xem co tran so hay k
			//cout << p[k] << "->" << c[k] << ' ';
		}
		res = min(res,tmp);
		return;
	}
	for(int j = i ; j >= 1 ; j--){
		c.push_back(j);
		Try(j,m*(j+1),c);
		c.pop_back();
	}
}
void input(){
	cin >> n;
}
void solve(){
	if ( n == 1){
		cout << 1 << '\n';
		return;
	}
	if(prime(n)){
		if( n <= 60)
			cout << ( 1LL << n - 1 ) << '\n';
		else 
			cout << 1e18 << '\n' ;
		return;	
	}
	res = 1e18;
	vector < int > c;
	Try(n-1,1,c);
	cout << res << '\n';
}
int main(){
	//freopen("input.txt","r",stdin);
	//freopen("output1.txt","w",stdout);
	faster();
	int t=1; //cin>>t;
	while(t--){ input();solve();}
	cerr << "\nRunning is : " << 1.0*clock()/1000 ;
	return 0;
}
//Code By PMD
 