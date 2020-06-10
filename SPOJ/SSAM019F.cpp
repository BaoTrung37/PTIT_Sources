/*
https://www.spoj.com/ACMPTIT/problems/SSAM019F/
*/
#include<bits/stdc++.h>
using namespace std;

main(){
	int t;
	long long F[100];
	cin>>t;
	F[0]=1; F[1]=1;
	for(int i=2;i<93;i++)
		F[i]=F[i-1]+F[i-2];
	while(t--){
		int n;
		cin>>n;
		cout<<F[n-1]<<endl;
	}	
}
// code by Trung 15cm

