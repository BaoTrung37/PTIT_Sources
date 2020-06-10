/*
https://www.spoj.com/PTIT/problems/BCINCSEQ/
*/
#include<bits/stdc++.h>
using namespace std;

main(){
	int a[10000],n,i,dem=1,max=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n-1;i++)
		if(a[i]<=a[i+1]) dem++;
		else {
			if(dem>max) max=dem;
			dem=1;
		}
	printf("%d",max);
}

// code by Bao Trung NTP

