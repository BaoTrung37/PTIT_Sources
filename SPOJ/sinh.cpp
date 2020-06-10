//Code By PMD
#include<bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define whatis(a) cout << #a " is " << (a) << endl;
using namespace std;
 
typedef long long i64;
const int N = 100005;
const i64 mod = 1e9+7;
const i64 inf = 1e18+7;
i64 B[N],u=0;
void sinh(int a[] ,int n , int &stop){
	int i=n-1;
	while(a[i]==9 && i>0){
		a[i]=0;
		i--;
	}
	if(i == 0) stop=1;
	else a[i]=9;
}
i64 S_sum(int a[] ,int n){
	i64 sum=0;
	for(int i=0;i<n;i++){
		sum=sum*10+a[i];
	}
	return sum;
}
void S_sinh(){
	int pos=1;
	int a[20]={0} , stop = 0;
	a[0]=9;
	while(true){
		int stop=0;
		while(stop==0){
			B[u++]=S_sum(a,pos);
			sinh(a,pos,stop);
		}
		pos++;
		if(pos > 15) break;
	}
}
void solve() {
	int n;
	cin>>n;
	for(int i=0;i<u;i++){
		if(B[i] % n == 0){
			cout<<B[i];
			return;
		}
	}
}
main(){
	IOS;
	int t=1;
	S_sinh();
//	for(int i=0;i<u;i++) cout<<B[i] << ' ';
	cin>>t;
	while(t--){
		solve();
		cout<<endl;
	}
}
//Code By PMD
