/*
https://www.spoj.com/PTIT/problems/EXCEL/
*/
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9+7;
string  Column(long long a){
	string tmp="";
	char c;
	while(1){
		if(a==0) break;
		a--;
		c='A'+a%26;
		tmp=c+tmp;
		a/=26;
	}
	return tmp;
}
main(){
	char tmp;
	long long r,c;
	while(1){
		cin>>tmp>>r>>tmp>>c;
		if(r==0 && c==0) break;
		cout<<Column(c)<<r<<endl;
	}
}

// code by Trung Ares

