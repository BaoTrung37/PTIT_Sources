/*
liet ke so nguyen to
https://vn.spoj.com/problems/PNUMBER/
*/
#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int SNT(int a){
	int i;
	if(a<2) return 0;
	for(i=2;i*i<=a;i++)	if(a%i==0) return 0;
	return 1;
}
main(){
	int a,b;
	scanf("%d%d",&a,&b);
	for(int i=a;i<=b;i++){
		if(SNT(i)==1) printf("%d\n",i);
	}
}

// code by Bao Trung NTP

