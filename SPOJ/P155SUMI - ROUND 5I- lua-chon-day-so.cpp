/*

*/
#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int mod = 1e9+7;

main(){
	int n,m;
	cin>>n>>m;
	int a[m+4];
	for(int i=1;i<=m;i++)
		cin>>a[i];
	sort(a+1,a+m+1);
	int hieu=2000;
	for(int i=1;i<=m-n+1;i++){
		if(a[i+n-1]-a[i]<hieu)
			hieu=a[i+n-1]-a[i];
	}
	cout<<hieu;
}


