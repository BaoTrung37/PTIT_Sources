/*
https://www.spoj.com/PTIT/problems/P141PROC/
*/
#include<bits/stdc++.h>
using namespace std;

main(){
	int t;
	cin>>t;
	int dem=0;
	while(t--){
		string s;
		cin>>s;
		if(s=="++X") ++dem;
		if(s=="X++") dem++;
		if(s=="--X") --dem;
		if(s=="X--") dem--;
	}
	cout<<dem<<endl;
}

// code by Trung 15cm

