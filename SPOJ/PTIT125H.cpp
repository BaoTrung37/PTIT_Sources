/*
https://www.spoj.com/PTIT/problems/PTIT125H/
*/
#include<bits/stdc++.h>
using namespace std;

main(){
	string s;
	int n;
	cin>>n>>s;
	int demS=0,demL=0;
	for(int i=0;i<n;i++){
		if(s[i]=='S') demS++;
		else demL++;
	}
	cout<<demS+(demL/2)+1;
}

// code by Trung 15cm

