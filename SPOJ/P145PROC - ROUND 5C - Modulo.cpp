/*

*/
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9+7;
main(){
	int t=10;
	int a[50];
	for(int i=0;i<43;i++)
		a[i]=0;
	while(t--){
		int n;
		cin>>n;
		int x=n%42;
		a[x]++;
	}
	int dem=0;
	for(int i=0;i<42;i++)
		if(a[i]!=0) dem++;
	cout<<dem;
}

// code by Trung Ares

