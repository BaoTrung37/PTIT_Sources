/*

*/
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9+7;
main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		int a[n+5];
		for(int i=0;i<n;i++)
			cin>>a[i];
		int dem=0;
		for(int i=0;i<n;i++){
			if(k>=a[i]){
				dem++;
				k-=a[i];
			}
			else break;
		}
		cout<<dem<<endl;
	}
}

// code by Trung Ares

