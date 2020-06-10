/*
https://www.spoj.com/PTIT/problems/P148PROA/
*/
#include <bits/stdc++.h>
using namespace std;

int main(){
	while(1){
		int n;
		cin>>n;
		if(n==0) break;
		if(n==1){
			cout<<"1"<<endl;
			continue;
		}
		int dem=1;
		while(1){
			if(n==1) break;
			if(n%2==0){
				n/=2;
				dem++;
			}
			else{
				n=n*3+1;
				dem++;
			}
		}
		cout<<dem<<endl;
	}
}
