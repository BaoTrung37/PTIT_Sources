/*
https://www.spoj.com/PTIT/problems/P151SUMB/
*/
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9+7;
main(){
	int n;
	cin>>n;
	int minn=100000;
	for(int i=0;i<=(n/5);i++){
		int kq=i*5;
		int kqs=n-kq;
		if(kqs%3==0){
			int dem=i+kqs/3;
			minn=min(minn,dem);
		}
	}
	if(minn==100000)	cout<<"-1";
	else cout<<minn;
}

// code by Trung Ares

