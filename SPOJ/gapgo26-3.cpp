/*
https://www.spoj.com/PTIT/problems/P196PROB/
*/
#include<bits/stdc++.h>
using namespace std;

main(){
	int a,b,c,min,max;
	scanf("%d%d%d",&a,&b,&c);
	min=a;
	if(min>b) min=b;
	if(min>c) min=c;
	max=a;
	if(max<b) max=b;
	if(max<c) max=c;
	printf("%d",max-min);
}

// code by Bao Trung NTP

