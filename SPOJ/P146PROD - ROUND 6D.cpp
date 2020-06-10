/*
https://www.spoj.com/PTIT/problems/P146PROD/
*/
#include<bits/stdc++.h>
using namespace std;

main(){
	int t;
	cin>>t;
	int dem=0;
	while(t--){
		int a,b,c;
		cin>>a>>b>>c;
		if(a==1 && b==1 || a==1 & c==1 || b == 1 && c== 1 || a==1 && b==1 && c==1)
			dem++;
	}
	cout << dem;
}

// code by Trung 15cm

