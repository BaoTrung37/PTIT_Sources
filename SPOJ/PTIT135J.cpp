/*
https://www.spoj.com/PTIT/problems/PTIT135J/
*/
#include<bits/stdc++.h>
using namespace std;
double laisuat(double n,double x){
	double y=n+(n*x)/100;
	return y;
}
main(){
	int t;
	cin>>t;
	while(t--){
		double n,l,m;
		cin>>n>>l>>m;
		int dem=1;
		double sum=laisuat(n,l);
		while(sum<m){
			dem++;
			sum=laisuat(sum,l);
		}
		cout<<dem<<endl;
	}
}

// code by Trung 15cm

