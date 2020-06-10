/*

*/
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9+7;
int n=5,X[100],chuaxet[100];
void In(){
	for(int i=1;i<=n;i++)
		cout<<X[i];
	cout<<endl;
}
void Try(int i){
	int j;
	for(int j=1;j<=n;j++){
		if(chuaxet[j]){
			X[i]=j; chuaxet[j]=0;
			if(i==n) In();
			else Try(i+1);
			chuaxet[j]=1;
		}
	}
}

main(){
	cin>>n;
	for(int i=1;i<=n;i++)
		chuaxet[i]=1;
	Try(1);
}

// code by Trung Ares

