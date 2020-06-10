/*
https://www.spoj.com/PTIT/problems/BCMATRIX/
*/
#include<bits/stdc++.h>
using namespace std;

main(){
	int n;
	cin>>n;
	long long a[n+1][n+1];
	long long cheo1=0,cheo2=0;
	for(int i=0;i<n;i++)
		for (int j=0;j<n;j++){
			cin>>a[i][j];
			if(i==j) cheo1+=a[i][j];
			if(n-j-1==i) cheo2+=a[i][j];
		}
	cout<<cheo1-cheo2;
}

// code by Bao Trung NTP

