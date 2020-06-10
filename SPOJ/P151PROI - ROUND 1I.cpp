/*
https://www.spoj.com/PTIT/problems/P151PROI/
*/
#include<bits/stdc++.h>
using namespace std;
int so(int a){
	int s=0;
	while(a>0){
		s+=a%10;
		a/=10;
	}
	return s;
}
main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int x=so(n);
		while(x>9){
			x=so(x);
		}
		cout<<x<<endl;
	}
}

// code by Trung 15cm

