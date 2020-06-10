/*

*/
#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int mod = 1e9+7;

main(){
	int s,n;
	cin>>s>>n;
	int a[n+5],b[n+5];
	for(int i=0;i<n;i++){
		cin>>a[i];
		cin>>b[i];
	}
	for(int i=0;i<n-1;i++)
		for(int j=i+1;j<n;j++){
			if(a[i]>a[j]){
				int tmp=a[i];
				a[i]=a[j];
				a[j]=tmp;
				
				int tmp2=b[i];
				b[i]=b[j];
				b[j]=tmp2;
			}	
		}
	int kt=1;
	for(int i=0;i<n;i++){
		if(s>a[i])
			s+=b[i];
		else {
			kt=0;
			cout<<"NO";
			break;
		}
	}
	if(kt==1) cout<<"YES";
}


