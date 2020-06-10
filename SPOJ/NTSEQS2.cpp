/*
https://www.spoj.com/PTIT/problems/NTSEQS2/
*/
#include<bits/stdc++.h>
using namespace std;

main(){
	int n,k;
	cin>>n>>k;
	int a[n+5];
	for(int i=0;i<n;i++)
		cin>>a[i];
	sort(a,a+n);
	int kt=1;
	for(int i=n-1;i>=0;i--){
		int x=k;
		for(int j=i;j>=0;j--){
			if(x>=a[j])
				x-=a[j];
			if(x==0){
				kt =0;
				break;
			}
		}
		if(kt==0) {
			cout<<"YES";
			break;
		}
	}
	if(kt==1) cout<<"NO";
}

// code by Trung 15cm

