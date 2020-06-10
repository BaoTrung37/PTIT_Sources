#include <bits/stdc++.h>
using namespace std;
int main (){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		sort(a,a+n);
		int ans=n, mid=n/2;
		for(int l = 0; l < n/2 && mid<n; l++ ){
			while(mid<n){
				if(2*a[l]<=a[mid]){
					ans--;
					mid++;
					break;
				}
				else mid++;
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}
//Code by Ninh Ngoc

