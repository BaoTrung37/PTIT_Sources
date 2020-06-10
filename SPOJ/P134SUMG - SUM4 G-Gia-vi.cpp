/*
https://www.spoj.com/PTIT/problems/P134SUMG/
*/
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9+7;
main(){
	int n;
	cin>>n;
	int a[n+2],b[n+2];
	for(int i=1;i<=n;i++){
		cin>>a[i]>>b[i];
	}
	int kt[n+2];
	kt[n]=1;
	int Stop=0;
	long long minn=1e9,hieu;
	while(!Stop){
		long long sum=0,tich=1;
		for(int i=1;i<=n;i++)
			if(kt[i]==1){
				tich*=a[i];
				sum+=b[i];	
			}
		hieu=abs(tich-sum);
		if(hieu >=0 )  minn=min(hieu,minn);
		int i=n;
		while(i>0 && kt[i]==1){
			kt[i]=0;
			i--;
		}
		if(i==0) Stop=1;
		else kt[i]=1;
	}
	cout<<minn;
}

// code by Trung Ares

