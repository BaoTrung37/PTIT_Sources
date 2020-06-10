/*
https://www.spoj.com/PTIT/problems/P135SUME/
*/
#include <bits/stdc++.h>
using namespace std;

int main(){
	int a[8];
	for(int i=0;i<8;i++)
		cin>>a[i];
	int t=0,g=0;
	for(int i=0;i<8-1;i++){
		if(a[i]<a[i+1]) t++;
		else if(a[i]>a[i+1]) g++;
	}
	if(t==7) cout<<"ascending"<<endl;
	else if(g==7) cout<<"descending"<<endl;
	else	cout<<"mixed"<<endl;
}
