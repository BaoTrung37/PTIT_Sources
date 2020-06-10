/*

*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long;
const int mod = 1e9+7;
main(){
	string a;
	cin>>a;
	int n=a.size();
	int i=n-2;
	bool KT=false;
	while(a[i]>=a[i+1] && i>=0) i--;
	if(i>=0){
		int k=n-1;
		while(a[i]>=a[k])	k--;
		swap(a[i],a[k]);
		int l=i+1,r=n-1;
		while(l<=r){
			swap(a[l],a[r]);
			l++;
			r--;
		}
	}
	else KT=true;
	if(KT==true) cout<<"0"<<endl;
	else cout<<a<<endl;
}


