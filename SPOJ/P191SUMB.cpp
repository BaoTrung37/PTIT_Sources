/*
https://www.spoj.com/ACMPTIT/problems/P191SUMB/
*/
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9+7;
main(){
	int s,b;
	cin>>s>>b;
	int a[s+5];
	for(int i=0;i<s;i++)
		cin>>a[i];
	int x[b+5],y[b+5];
	for(int i=0;i<b;i++){
		cin>>x[i]>>y[i];
	}
	for(int i=0;i<s;i++){
		int tien=0;
		for(int j=0;j<b;j++){
			if(a[i]>=x[j]) tien+=y[j];
		}
		cout<<tien<<" ";
	}
}

// code by Trung Ares

