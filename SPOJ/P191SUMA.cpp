/*
https://www.spoj.com/ACMPTIT/problems/P191SUMA/
*/
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9+7;
main(){
	int n;
	cin>>n;
	int a[n+5];
	for(int i=1;i<=n;i++)
		cin>>a[i];
	int max=0,dem=0;
	for(int i=1;i<=n;i++){
		if(max<a[i]) max=a[i];
		if(max==i) dem++;
	}
	cout<<dem;
}	

// code by Trung Ares

