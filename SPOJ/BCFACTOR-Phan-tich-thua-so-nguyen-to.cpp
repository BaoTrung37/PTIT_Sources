/*
https://www.spoj.com/PTIT/problems/BCFACTOR/
*/
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9+7;
main(){
	int n;
	cin>>n;
	for(int i=2;i<=sqrt(n);i++){
		int dem=0;
		while(n%i==0){
			n/=i;
			dem++;
		}
		if(dem>0) cout<<i<<" "<<dem<<endl;
	}
	if(n>1) cout<<n<<" "<<"1";
}

// code by Trung Ares

