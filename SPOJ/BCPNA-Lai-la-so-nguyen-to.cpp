/*
https://www.spoj.com/PTIT/problems/BCPNA/
*/
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9+7;
int ngto(int n){
	if(n<2) return 0;
	for(int i=2;i<=sqrt(n);i++)
		if(n%i==0) return 0;
	return 1;
}
main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int dem=0;
		if(ngto(n)) dem++;
		int tg=0;
		for(int i=2;i<=n/2;i++){
			int tg=0;
			if(ngto(i)){
				for(int j=i;j<=n;j++){
					if(ngto(j)){
						tg+=j;
						if(tg==n) dem++;
						if(tg>n) break;
					}
				}
			}
		}
		cout<<dem<<endl;	
	}
}

// code by Trung Ares

