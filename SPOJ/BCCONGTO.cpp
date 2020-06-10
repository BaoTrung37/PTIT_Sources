/*
https://www.spoj.com/PTIT/problems/BCCONGTO/
*/
#include<bits/stdc++.h>
using namespace std;

main(){
	while(1){
		string s;
		cin>>s;
		if(s=="0") break;
		int n=s.length();
		long long S=0;
		for(int i=0;i<n;i++){
			int num=s[i]-'0';
			if(num>4) num--;
			S=S*9+num;
		}
		cout<<s<<": "<<S<<endl;
	}
}

// code by Trung 15cm

