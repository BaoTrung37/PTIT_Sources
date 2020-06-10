/*
https://www.spoj.com/PTIT/problems/P131SUMC/
*/
#include<bits/stdc++.h>
using namespace std;
int p[5];
float tinh(int a,int c,int b,int d){
	float x=abs((float)p[a]/p[c] - (float)p[b]/p[d]);
	return x;
}
main(){
	cin>>p[1]>>p[2]>>p[3]>>p[4];
	int res=0;
	float kq=tinh(1,3,2,4);
	if(tinh(3,4,1,2)>kq){
		kq=tinh(3,4,1,2);
		res=1;
	}
	
	if(tinh(4,2,3,1)>kq){
		kq=tinh(4,2,3,1);
		res=2;
	}
	if(tinh(2,1,4,3)>kq){
		kq=tinh(2,1,4,3);
		res=3;
	} 
	cout<<res;
}

// code by Trung 15cm

