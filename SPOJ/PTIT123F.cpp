/*
https://www.spoj.com/PTIT/problems/PTIT123F/
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n+5];
		for(int i=1;i<=n;i++)
			a[i]=0;
		for(int i=1;i<=n;i++){
			for(int j=i;j<=n;j+=i){
				if(a[j]==0)	a[j]=1;
				else a[j]=0;
			}
		}
		int dem=0;
		for(int i=1;i<=n;i++)
			if(a[i]==1) dem++;
		cout<<dem<<endl;
	}
}

// code by Trung 15cm

