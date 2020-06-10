/*

*/
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9+7;
int c[50],n=5,k=3,Stop=0;
void in(){
	for(int i=1;i<=n;i++)
		cout<<c[i];
	cout<<endl;
}
void sinhKT(){
	int i=k;
	while(c[i]==n-k+i) i--;
	if(i==0) Stop=1;
	else{
		c[i]++;
		for(int j=i+1;j<=k;j++)
			c[j]=c[j-1]+1;
	}
}
main(){
	for(int i=1;i<=n;i++)
		c[i]=i;
	while(!Stop){
		in();
		sinhKT();
	}
}

// code by Trung Ares

