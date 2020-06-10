/*

*/
#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int mod = 1e9+7;
long long a[1000005];

main(){
	int n,dem=0;
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>a[i];
	for(int i=0,j=n-1; i<n, j>=0 ;   ){
		if(a[i]==a[j]){
			i++;
			j--;
			if(i>=j) break;
		}
		else if(a[i]<a[j]){
			a[i+1]=a[i]+a[i+1];
			i++;
			dem++;
		}
		else{
			a[j-1]=a[j]+a[j-1];
			j--;
			dem++;
		}
	}
	cout<<dem;
}


