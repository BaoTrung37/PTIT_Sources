/*
https://www.spoj.com/PTIT/problems/PTITSU1C/
*/
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9+7;
main(){
	int t;
	cin>>t;
	while(t--){
		int n,s;
		cin>>n>>s;
		int a[n+5];
		for(int i=0;i<n;i++)
			cin>>a[i];
		int kt=0;
		for(int i=0;i<n-2;i++){
			for(int j=i+1;j<n-1;j++){
				for(int k=j+1;k<n;k++){
					if( a[i]+a[j]+a[k]<=s  && a[i]+a[j]+a[k]>kt)
						kt=a[i]+a[j]+a[k];
				}
			}
		}
		cout<<kt<<endl;
	}
}

// code by Trung Ares

