/*
https://www.spoj.com/PTIT/problems/BCACM11B/
*/
#include<bits/stdc++.h>
using namespace std;

main(){
	int t;
	cin>>t;
	while(t--){
		int n,x,y,dem=1,a[100][100],i,b;
		cin>>n>>x>>y;
		while(b<=n/2){
			for(i=b;i<n-b;i++)		a[b][i]=dem++;
			for(i=b+1;i<n-b;i++)	a[i][n-b-1]=dem++;
			for(i=n-b-2;i>=b;i--)	a[n-b-1][i]=dem++;
			for(i=n-b-2;i>b;i--)	a[i][b]=dem++;
			b++;
		}
		cout<<a[x-1][y-1]<<endl;	
	}
}

// code by Bao Trung NTP

