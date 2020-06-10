/*
https://www.spoj.com/PTIT/problems/REMOVBIT/
*/
#include<bits/stdc++.h>
#include<string.h>
using namespace std;

main(){
	char s[1000001];
	cin>>s;
	int len=strlen(s);
	int kt=1;
	for(int i=0;i<len;i++){
		if(s[i]=='0'){
			for(int j=i;j<len;j++){
				s[j]=s[j+1];
			}
			kt=0;
		}
		if(kt==0){
			s[len-1]='\0';
			cout<<s;
			break;
		}
	}
	if(kt==1){
		s[len-1]='\0';
		cout<<s;
	}
}

// code by Trung 15cm

