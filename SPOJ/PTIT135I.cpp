/*
https://www.spoj.com/PTIT/problems/PTIT135I/
*/
#include<bits/stdc++.h>
#include<string.h>
using namespace std;

main(){
	int t;
	cin>>t;
	while(t--){	
		char s[100000];
		cin>>s;
		int dem=1;
		int n=strlen(s);
		for(int i=0;i<n;i++){
			if(s[i]==s[i+1]) dem++;
			else {
			cout<<dem<<s[i];
			dem=1;
			}
		}
		cout<<endl;
	}	
}

// code by Trung 15cm

