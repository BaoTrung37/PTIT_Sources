/*
https://www.spoj.com/PTIT/problems/BCINCSEQ/
*/
#include<bits/stdc++.h>
using namespace std;

main(){
	int n;
	cin>>n;
	int a[n+5],b[n+5];
	for(int i=0;i<n;i++)
		cin>>a[i];
	b[0]=1;
	int max=0;
	for(int i=1;i<n;i++){
		if(a[i]>=a[i-1])	b[i]=b[i-1]+1;
		else b[i]=1;
		if(b[i]>max) max=b[i];
	}
	cout<<max;
}

// code by Trung 15cm

