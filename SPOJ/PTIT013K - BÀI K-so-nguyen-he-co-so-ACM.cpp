/*
https://www.spoj.com/PTIT/problems/PTIT013K/
*/
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9+7;
int giaithua(int n){
	int s=1;
	while(n>1){
		s*=n;
		n--;
	}
	return s;
}
main(){
	int t;
	cin>>t;
	while(t--){
		string S;
		cin>>S;
		int n=S.size();
		long long sum=0;
		for(int i=n-1;i>=0;i--){
			int so=S[i]-'0';
			sum+=so*giaithua(n-i);
		}
		cout<<sum<<endl;
	}
}

// code by Trung Ares

