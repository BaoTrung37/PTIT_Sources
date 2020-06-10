/*
https://www.spoj.com/PTIT/problems/P154SUMI/
*/
#include<bits/stdc++.h>
#include<math.h>
using namespace std;

main(){
	int n;
	cin>>n;
	int dem=0;
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			long long c=sqrt(i*i+j*j);
			if(i*i+j*j==c*c && c<=n)
				dem++;
		}
	}
	cout<<dem;
}

// code by Bao Trung NTP

