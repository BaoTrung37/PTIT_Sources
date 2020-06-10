/*
https://www.spoj.com/ACMPTIT/problems/SSAM019B/
*/
#include<bits/stdc++.h>
using namespace std;

main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n+5];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		int kt=0;
		for(int i=0;i<n;i++){
			for(int j=i+1;j<n;j++){
				if(a[i]==a[j]){
					kt++;
					cout<<a[i]<<endl;
					break;
				}
			}
			if(kt==1) break;
		}
		if(kt==0) cout<<"NO";
	}
}

// code by Trung 15cm

