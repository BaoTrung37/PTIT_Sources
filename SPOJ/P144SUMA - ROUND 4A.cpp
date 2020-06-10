/*
https://www.spoj.com/PTIT/problems/P144SUMA/
*/
#include<bits/stdc++.h>
using namespace std;

main(){
	int n;
	cin>>n;
	int a[n+4],b[n+4];
	for(int i=0;i<n;i++){
		cin>>a[i];
		b[i]=1;
	}
	int dem=1;
	for(int i=0;i<n-1;i++){
		if(a[i]!=a[i+1]) {
			dem++;
		}
	}
	cout<<dem;
}

// code by Trung 15cm

