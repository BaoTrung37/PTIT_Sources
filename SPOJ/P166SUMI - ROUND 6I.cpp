/*
https://www.spoj.com/PTIT/problems/P166SUMI/
*/
#include<bits/stdc++.h>
using namespace std;

main(){
	int a[10000],n;
	cin>>n;
	int dem=0;
	for(int i=0;i<n;i++){
		cin>>a[i];
		if(a[i]==0) dem++;
	}
		if(dem==1) cout<<"YES";
		else cout<<"NO";
}

// code by Trung 15cm

