/*
https://www.spoj.com/ACMPTIT/problems/SSAM019G/
*/
#include<bits/stdc++.h>
using namespace std;

main(){
	char s[100][1000];
	strcpy(s[1],"A");	
	strcpy(s[2],"B");
	for(int i=3;i<93;i++){
		char kq1[50]="";
		char kq2[50]="";
		strcpy(kq1,s[i-2]);
		strcpy(kq2,s[i-1]);
		strcat(kq1,kq2);
		strcpy(s[i],kq1);
	}
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		cout<<s[n][k]<<endl;
	}
}

// code by Trung 15cm

