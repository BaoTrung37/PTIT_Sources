/*
https://www.spoj.com/PTIT/problems/P151PROH/
*/
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9+7;
main(){
	string s;
	cin>>s;
	int n=s.size();
	int kt=1;
	for(int i=0;i<n-2;i++){
		if(s[0] !='1'){
			kt=0;
			cout<<"NO";
			break;
		}
		if(s[i]=='4'|| s[i]=='1'){
			if(s[i]== '4' && s[i+1]=='4' && s[i+2]=='4'){
				kt=0;
				cout<<"NO";
				break;
			}
		}
		else{
			kt=0;
			cout<<"NO";
			break;
		}
	}
	if(kt==1) cout<<"YES";
}

// code by Trung Ares

