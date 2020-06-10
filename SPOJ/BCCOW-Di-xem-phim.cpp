/*
https://www.spoj.com/PTIT/problems/BCCOW/
*/
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9+7;
main(){
	int kl,n;
	cin>>kl>>n;
	int a[n+5];
	for(int i=1;i<=n;i++)
		cin>>a[i];	
	int kt[n+1];
	kt[n]=1;
	int Stop=0;
	long long maxx=0,sum=0;
	while(!Stop){
		sum=0;
		for(int i=1;i<=n;i++)
			if(kt[i]==1) sum+=a[i];
			
		if( sum<= kl) 
			maxx=max(maxx,sum);
			
		int i=n;
		
		while(i>0 && kt[i]==1){
			kt[i]=0;
			i--;
		}
		
		if(i==0) Stop=1;
		else kt[i]=1;
	}
	cout<<maxx;
}

// code by Trung Ares

