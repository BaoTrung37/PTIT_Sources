/*
https://www.spoj.com/PTIT/problems/BCTEST12/
*/
#include<bits/stdc++.h>
#include<string.h>
using namespace std;

main(){
	char s[101];
	cin.getline(s,101);
	int n=strlen(s);
	for(int i=0;i<n;i++){
		s[i]=tolower(s[i]);
		if(s[i]=='a' || s[i]=='o' || s[i]=='y' || s[i]=='e' || s[i]=='u' || s[i]=='i' )
			continue;
		else{
		//	cout<<".";
			printf(".%c",s[i]);
		}
	}
}

// code by Trung 15cm

