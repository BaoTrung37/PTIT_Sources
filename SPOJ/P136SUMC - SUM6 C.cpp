/*
https://www.spoj.com/PTIT/problems/P136SUMC/
*/
#include<bits/stdc++.h>
using namespace std;
int dao(int a){
	int tmp=0;
	while(a>0){
		tmp = tmp *10 + a%10;
		a/=10;
	}
	return tmp;
}
main(){
	int a,b;
	cin>>a>>b;
	if(dao(a) > dao(b)) cout << dao(a);
	else cout << dao(b);
}

// code by Bao Trung NTP

