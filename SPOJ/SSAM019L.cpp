/*
https://www.spoj.com/ACMPTIT/problems/SSAM019L/
*/
#include<bits/stdc++.h>
#include<math.h>
using namespace std;

main(){
	int t;
	cin>>t;
	while(t--){
		int n,h;
		cin>>n>>h;
		int i=1;
		while(i<n){
			float x=sqrt((float)i/n)*h;
			printf("%.6f ",x);
			i++;
		}
		cout<<endl;
	}
}

// code by Trung 15cm

