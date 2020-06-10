/*
https://www.spoj.com/PTIT/problems/SSAM219J/
*/
#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int mod = 1e9+7;

main(){
	int t;
	cin>>t;
	while(t--){
		long long n,k,kt=1;
		cin>>n>>k;
		long long  a[n+2];
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		long long tong =0;
		for(int i=0;i<n;i++){
			tong = 0;
			if(a[i]<=k){
				for(int j=i;j<n;j++){
					tong += a[j];
					if(tong == k){
						kt=0;
						break;
					}
					if(tong > k) break;
				}	
			}
			if(kt==0) break;
		}
		if(kt==0) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
}


