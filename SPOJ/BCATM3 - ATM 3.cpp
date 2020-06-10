/*
https://www.spoj.com/PTIT/problems/BCATM3/
*/
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9+7;
main(){
	int t;
	cin>>t;
	int a[9]={500,200,100,50,20,10,5,2,1};
	while(t--){
		int n;
		cin>>n;
		int dem=0;
		for(int i=0;i<=8;i++){
			if(n>=a[i]){
				int x=n/a[i];
				dem+=x;
				n-=x*a[i];
			}
		}
		cout<<dem<<endl;
	}
}

// code by Trung Ares

