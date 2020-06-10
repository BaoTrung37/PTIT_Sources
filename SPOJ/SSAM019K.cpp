/*
https://www.spoj.com/ACMPTIT/problems/SSAM019K/
*/
#include<bits/stdc++.h>
using namespace std;
int tong(long long a){
	int n=0;
	while(a>0){
		n+=a%10;
		a/=10;
	}
	return n;
}
main(){
	long long n;
	cin>>n;
	int s1=tong(n);
	long long i=2;
	int s2=0;
	while(n>1){
		if(n%i==0){
			s2+=tong(i);
			n/=i;
		}
		else i++;
	}
	if(s1==s2) cout<<"YES";
	else cout<<"NO";
}

// code by Trung 15cm

