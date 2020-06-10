/*
https://www.spoj.com/PTIT/problems/BCCOM/
*/
#include<bits/stdc++.h>
using namespace std;
int sum(int a){
	int Sum=0;
	while(a>0){
		Sum+=a%10;
		a/=10;
	}
	return Sum;
}
main(){
	int t;
	cin>>t;
	while(t--){
		int a;
		cin>>a;
		int x=sum(a);
		while(x>9){
			x=sum(x);
		}
		cout<<x<<endl;
	}
}

// code by Bao Trung NTP

