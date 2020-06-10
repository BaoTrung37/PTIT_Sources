/*
https://www.spoj.com/PTIT/problems/PTIT138E/
*/
#include<bits/stdc++.h>
using namespace std;

main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int tmp=0,dem=1;
		while(n/10!=0){
			tmp=(n%10 + tmp>=5);
			n/=10;  dem*=10;
		}
		cout<<(n+tmp)*dem<<endl;
	}
}

// code by Trung 15cm

