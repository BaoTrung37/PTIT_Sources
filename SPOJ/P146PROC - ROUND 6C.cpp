/*
https://www.spoj.com/PTIT/problems/P146PROC/
*/
#include<bits/stdc++.h>
using namespace std;

main(){
	int a[4],dem=1;
	for(int i=0;i<4;i++)
		cin>>a[i];
	sort(a,a+4);
	for(int i=0;i<4-1;i++){
		if(a[i]!=a[i+1]) dem++;
	}
	cout<<4-dem;
}

// code by Trung 15cm

