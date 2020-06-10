/*
https://www.spoj.com/PTIT/problems/P133SUMF/
*/
#include <bits/stdc++.h>
using namespace std;
int main (){
	int a[3];
	for(int i=0;i<3;i++){
		cin>>a[i];
	}
	sort(a,a+3);
	if(a[1]-a[0] == a[2]-a[1]){
		cout<< 2*a[2]-a[1];
	}
	else if(a[1]-a[0] < a[2]-a[1]){
		cout<<(a[2]+a[1])/2;
	}
	else{
		cout<<(a[0]+a[1])/2;
	}
	return 0;
}

// code by Bao Trung NTP

