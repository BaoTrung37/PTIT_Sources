/*
https://www.spoj.com/PTIT/problems/BCLUCKY1/
*/
#include<bits/stdc++.h>
#include<string.h>
using namespace std;

main(){
	string s;
	cin>>s;
	int n=s.length();
	int kt=0;
	for(int i=0;i<n;i++){
		int x=s[i]-'0';
		if(x==7 || x==4 ) {
			kt++;
		}
	}
	if(kt==7 || kt==4) cout<<"YES";
	else cout<<"NO";
}

// code by Trung 15cm

