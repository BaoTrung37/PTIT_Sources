/*
https://www.spoj.com/PTIT/problems/ALGOPRO7/
*/
#include<bits/stdc++.h>
using namespace std;

main(){
	int n,k;
	cin>>n>>k;
	int arr[n+5];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	sort(arr,arr+n);
	cout<<arr[k];
}

// code by Bao Trung NTP

