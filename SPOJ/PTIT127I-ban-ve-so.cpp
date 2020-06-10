/*
https://www.spoj.com/PTIT/problems/PTIT127I/
*/
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9+7;
main(){
	while(1){
		int n;
		cin>>n;
		if(n==0) break;
		int ds[50];
		for(int i=0;i<50;i++)
			ds[i]=0;
		int a[n+5][7];
		for(int i=0;i<n;i++)
			for(int j=0;j<6;j++){
				cin>>a[i][j];
				ds[a[i][j]]++;
			}
		int kt=1;
		for(int i=1;i<50;i++){
			if(ds[i]==0){
				kt=0;
				break;
			}
		}
		if(kt==0) cout<<"No"<<endl;
		else cout<<"Yes"<<endl;
	}
}

// code by Trung Ares

