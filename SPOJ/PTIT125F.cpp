/*
https://www.spoj.com/PTIT/problems/PTIT125F/
*/
#include<bits/stdc++.h>
using namespace std;

main(){
	int t,a,b;
	cin>>t;
	long long tonglen=0,tongxuong=0;
	long long minlen=100000,minxuong=100000;
	while(t--){
		cin>>a>>b;
		if(minlen>a)	minlen=a;
		if(minxuong>b)	minxuong=b;
		tonglen+=a;
		tongxuong+=b;
	}
	if(tonglen>tongxuong) cout<<tonglen+minxuong;
	else cout<<tongxuong+minlen;
}

// code by Trung 15cm

