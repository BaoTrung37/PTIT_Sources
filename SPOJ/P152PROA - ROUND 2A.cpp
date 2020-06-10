/*
https://www.spoj.com/PTIT/problems/P152PROA/
*/
#include<bits/stdc++.h>
using namespace std;
// nguyen to cung nhau
int ucln(int a,int b){
	int tmp;
	while(b!=0){
		tmp=a%b;
		a=b;
		b=tmp;
	}
	return a;
}
int ngto(int a){
	if(a<2) return 0;
	for(int i=2;i*i<=a;i++)
		if(a%i==0) return 0;
	return 1;
}
main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int dem=0;
		for(int i=1;i<=n;i++){
			if(ucln(i,n)==1)
				dem++;
		}
		if(ngto(dem))	cout<<"1"<<endl;
		else cout<<"0"<<endl;
	}
}

// code by Trung 15cm

