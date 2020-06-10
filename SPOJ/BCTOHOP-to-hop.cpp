/*

*/
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9+7;
main(){
	int n,k;
	cin>>n>>k;
	int a[n+2],Stop=0;
	for(int i=1;i<=n;i++)
		a[i]=i;
	while(!Stop){
		for(int i=1;i<=k;i++)
			cout<<a[i]<<" ";
		cout<<endl;
		int i=k;
		while(a[i]==n-k+i)	i--;
		if(i==0) Stop=1;
		else{
			a[i]++;
			for(int j=i+1;j<=k;j++)
				a[j]=a[j-1]+1;
		}
	}
}

// code by Trung Ares

