/*
https://www.spoj.com/PTIT/problems/P191PROB/
*/
#include<bits/stdc++.h>
using namespace std;

main(){
	int a[10000],n,k;
	scanf("%d%d",&n,&k);
	int i,j,dem;
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(a[i]+a[j]==k) dem++; 
		}
	}
	printf("%d",dem);
}

// code by Bao Trung NTP

