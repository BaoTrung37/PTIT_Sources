/*
https://www.spoj.com/ACMPTIT/problems/SSAM019J/
*/
#include<bits/stdc++.h>
using namespace std;
int bcnn(int a,int b){
	int m=a*b;
	while(b!=0){
		int tmp=a%b;
		a=b;
		b=tmp;
	}
	return (m/a);
}
main(){
	int n;
	cin>>n;
	int a[n+4],b[n+5];
	for(int i=1;i<=n;i++)
		cin>>a[i];
	b[1]=a[1];
		for(int)
}

// code by Trung 15cm

