/*
https://www.spoj.com/PTIT/problems/BCCAR/
*/
#include<bits/stdc++.h>
using namespace std;

main(){
	int t;
	cin>>t;
	while(t--){
		int a[1000],n;
		cin>>n;
		for(int i=0;i<n;i++)
			cin>>a[i];
		sort(a,a+n);
		cout<<(a[n-1]-a[0])*2<<endl;
	}
}

// code by Trung 15cm

