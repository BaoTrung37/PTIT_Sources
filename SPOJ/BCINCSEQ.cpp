/*
https://www.spoj.com/PTIT/problems/BCINCSEQ/
*/
#include<bits/stdc++.h>
using namespace std;

main(){
	int a[100005],b[100005],n,maxx;
	cin>>n;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	b[1]=1;
	for(int i=2;i<n;i++){
		if(a[i]<=a[i+1]) b[i]=b[i-1]+1;
		else b[i]=1;
	}
	maxx=0;
	for(int i=1;i<=n;i++)
		if(maxx< b[i]) maxx=b[i];
	cout<<maxx;
}

// code by Bao Trung NTP

