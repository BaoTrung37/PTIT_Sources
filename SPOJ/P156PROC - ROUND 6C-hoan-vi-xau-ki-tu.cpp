/*

*/
#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int mod = 1e9+7;
	
main(){
	while(1){
		string s;
		int k;
		cin>>s>>k;
		if(s=="#" && k==0) break;
		int n=s.size();
		int a[n+1];
		for(int i=1;i<=n;i++)
			a[i]=i;
		int dem=0;
		while(dem<=k){
			int i=n-1;
			while(a[i]>=a[i+1] && i>0)
				i--;
			int k=n;
			while(a[i]>=a[k])
				k--;
			swap(a[i],a[k]);
			int l=i+1,r=n;
			while(l<=r){
				swap(a[l],a[r]);
				l++;	r--;
			}
			dem++;
		}
		for(int i=1;i<=n;i++)
			cout<<s[a[i]-1];
			cout<<endl;
	}
}


