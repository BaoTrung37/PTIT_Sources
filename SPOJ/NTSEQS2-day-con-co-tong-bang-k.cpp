/*
https://www.spoj.com/PTIT/problems/NTSEQS2/
*/
#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int mod = 1e9+7;

main(){
	int n,s;
	cin>>n>>s;
	int a[n+2],b[40001]={0};
	for(int i=1;i<=n;i++)
		cin>>a[i];
	b[0]=1;
	for(int i=1;i<=n;i++){
		for(int j=s;j>=a[i];j--){
			if(b[j]==0 && b[j-a[i]]==1) b[j]=1;
		}
	}
	if(b[s]==1) cout<<"YES";
	else cout<<"NO";
}


