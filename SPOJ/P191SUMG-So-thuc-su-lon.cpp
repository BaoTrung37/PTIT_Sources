/*
https://www.spoj.com/PTIT/problems/P191SUMG/
*/
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9+7;
int tong(long long s){
	int x=0;
	while(s>0){
		x+=s%10;
		s/=10;
	}
	return x;
}
main(){
	long long n,s;
	cin>>n>>s;
	long long x=s;
	for(long long i=s+1;  ;i++){
		if(i-tong(i)>=s){
			x=i;
			break;	
		}
	}
	long long ans=n-x+1;
	if(ans<0) cout<<"0";
	else cout<<ans;
}

// code by Trung Ares

