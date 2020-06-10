/*
https://www.spoj.com/PTIT/problems/P197PROB/
*/
#include<bits/stdc++.h>
using namespace std;

main(){
	int t;
	cin>>t;
	while(t--){
		long long n,k,i;
		cin>>n>>k;
		long long dem=0;
		for( i=1;  ;  ){
			long long s=n-i*k;
			if(s>=0){
				dem+=k;
				n=s;	
				i++;
			}
			else{
				dem+=n/i;
				break;
			}
		}
		cout<< dem << endl;
	}
}

// code by Trung 15cm

