/*

*/
#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int mod = 1e9+7;

main(){
	int n;
	cin>>n;
	int a[n+2];
	for(int i=1;i<=n;i++)
		cin>>a[i];
	cout<<a[1]<<" ";
	for(int i=2;i<=n;i++){
		int x=a[i]*i-a[i-1]*(i-1);
		cout<<x<<" ";
	}
}


