/*
https://www.spoj.com/PTIT/problems/P196PROJ/
*/
#include<bits/stdc++.h>
#include<math.h>
using namespace std;

main(){
	int a[10000],n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	long long s=0,max=0;
	for(i=0;i<n;i++){
		s+=a[i];
		if(abs(s)>max) max=abs(s);
	}
	printf("%lld",max);
}

// code by Bao Trung NTP

