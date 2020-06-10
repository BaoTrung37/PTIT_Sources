/*
https://www.spoj.com/PTIT/problems/P145PROF/
*/
#include<bits/stdc++.h>
using namespace std;

main(){
	int n;
	cin>>n;
	int x,y,res=0;
	int a[24][60];
	for(int i=0;i<=23;i++)
		for(int j=0;j<=59;j++)
			a[i][j]=0;
	for(int i=0;i<n;i++){
		cin>>x>>y;
		a[x][y]++;
		res=max(res,a[x][y]);
	}
	cout<<res;
}

// code by Trung 15cm

