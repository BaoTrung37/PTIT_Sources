/*
https://www.spoj.com/PTIT/problems/BCPERMU/
*/
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9+7;
main(){
	int n,a[20];
	cin>>n;
	int stop=0;
	for(int i=0;i<n;i++)
		a[i]=i+1;
	while(!stop){
		for(int i=0;i<n;i++)
			cout<<a[i];
		cout<<endl;
		int i=n-2;
		while(a[i]>=a[i+1] && i>=0)
			i--;
		if(i<0) stop =1;
		else{
			int k=n-1;
			while(a[i]>=a[k])
				k--;
			swap(a[i],a[k]);
			int l=i+1, r=n-1;
			while(l<=r){
				swap(a[l],a[r]);
				l++;
				r--;
			}
		}
	}
}

// code by Trung Ares

