/*
https://www.spoj.com/PTIT/problems/P155SUMD/
*/
#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int binarySearch(int a[],int left,int right,int key){
	int vt=-1;
	while(left<=right){
		int mid=(left+right)/2;
		if(a[mid]<=key){
			vt=mid;			//luu vi tri
			left=mid+1;		//thu gon khoang cach	
		}
		else right=mid-1;
	}
	return vt;
}
main(){
	int n,m;
	cin>>n>>m;
	int a[n],b[m];
	for(int i=0;i<n;i++)
		cin>>a[i];
	for(int i=0;i<m;i++)
		cin>>b[i];
	sort(a,a+n);
	int vitri=-1;
	for(int i=0;i<m;i++){
		int kt=b[i];
		if(kt<a[0]) cout<<"0"<<endl;
		else{
			int x=binarySearch(a,0,n-1,kt);
			vitri=x+1;
			cout<<vitri<<endl;
		}
	}
}

// code by Bao Trung NTP

