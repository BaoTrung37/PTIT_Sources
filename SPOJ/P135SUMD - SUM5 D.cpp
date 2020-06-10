/*
https://www.spoj.com/PTIT/problems/P135SUMD/
*/
#include<bits/stdc++.h>
using namespace std;

main(){
	long long k;
	cin>>k;
	long long s=1;
	while(1){
		if(s>=k) break;
		s*=2;
	}
	long long slb=0;		// so lan be
	long long slt=s;		// so luong thanh
	if(slt==k){
		cout<<k<<" "<<"0";
		return 0;
	}
	while(1){
		if(slt==k) break;
		long long kt=s;
		slb=0;
		slt=0;
		while(1){
			if(kt==1) break;
			slt+=kt/2;
			slb++;
			if(slt==k){
				cout<<s<<" "<<slb;
				break;
			}
			else if(slt>k){
				slt-=kt/2;
			}
			kt=kt/2;
		}
		s*=2;
	}
}

// code by Trung 15cm

