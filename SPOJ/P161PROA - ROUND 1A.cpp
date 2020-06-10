/*
https://www.spoj.com/PTIT/problems/P161PROA/


3 uoc khi do la so chinh phuong va can 2 cua no la
so nguyen
*/
#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int ngto(long long a){
	int i;
	if(a<2) return 0;
	for(int i=2;i<=sqrt(a);i++)
		if(a%i==0) return 0;
	return 1;
}
int GanNT(long long a){
	if(a==1) return 0;
	long long x=sqrt(a);
	if((x*x)==a && ngto(x)==1) return 1;
	return 0;
}
main(){
	int n;
	cin>>n;
	long long a[n+4];
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(GanNT(a[i])) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
}

// code by Trung 15cm

