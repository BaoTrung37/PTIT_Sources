/*
https://www.spoj.com/PTIT/problems/P144PROC/
*/
#include<bits/stdc++.h>
#define x 1000000007;
using namespace std;
long long power(long long a,long long b){
	if(b==0) return 1;
	if(b%2==0){
		long long p=power(a,b/2);
		return (p*p)%x;
	}
	else{
		long long p=power(a,b-1);
		return (p*a)%x;
	}
}
main(){
	long long a,b;
	while(1){
		cin>>a>>b;
		if(a==0 && b==0) break;
		cout<<power(a,b)<<endl;
	}
}

// code by Trung 15cm

