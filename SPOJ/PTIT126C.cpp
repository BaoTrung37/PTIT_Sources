/*
https://www.spoj.com/PTIT/problems/PTIT126C/
*/
#include<bits/stdc++.h>
using namespace std;

main(){
	int t;
	cin>>t;
	while(t--){
		int n,s,dem=0,min=10000000;
		cin>>n>>s;
		int a[n+3];
		for(int i=0;i<n;i++)
			cin>>a[i];
		int kt=0;
		for(int i=0;i<n;i++){
			for(int j=i;j<n;j++){
				kt+=a[j];
				if(kt<s) dem++;
				else {
					if(dem<min) min=dem+1;
					dem=0;
					kt=0;
					break;
				}
			}
		}
		cout<<min<<endl;
	}
}

// code by Trung 15cm

