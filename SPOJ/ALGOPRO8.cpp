/*
https://www.spoj.com/PTIT/problems/ALGOPRO8/
*/
#include<bits/stdc++.h>
using namespace std;

main(){
	int a,b;
	cin>>a>>b;
	if(a>b)
		cout << b <<" "<<(a-b)/2;
	else cout << a <<" "<<(b-a)/2;
}

// code by Bao Trung NTP

