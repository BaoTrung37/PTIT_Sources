/*
https://www.spoj.com/PTIT/problems/BCFIBO/
*/
#include<bits/stdc++.h>
using namespace std;

main(){
	long long F[100],n;
	cin>>n;
	F[0]=1; F[1]=1;
	for(int i=2;i<93;i++)
		F[i]=F[i-1]+F[i-2];
	cout<<F[n-1];
}

// code by Trung 15cm

