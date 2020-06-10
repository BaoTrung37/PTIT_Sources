/*
https://www.spoj.com/PTIT/problems/BCACM11A/
*/
#include<bits/stdc++.h>
using namespace std;

main(){
	int t;
	cin>>t;
	while(t--){
		int a,b,c;
		cin>>a>>b>>c;
		if( a<= 145 && b<= 180-a && c<= 900 -a -b)
			cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
}

// code by Bao Trung NTP

