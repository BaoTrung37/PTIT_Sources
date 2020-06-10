/*
https://www.spoj.com/PTIT/problems/ALGOPRO4/
*/
#include<bits/stdc++.h>
#include<string.h>

using namespace std;
void themKhong(char *s,int &len){
	len++;
	for(int i=len-1;i>=0;i--){
		s[i+1]=s[i];
	}
		s[0]='0';
}

main(){
	char s[100];
	cin.getline(s,100);
	int len=strlen(s);
	while (len %3 !=0 )
		themKhong(s,len);
	for(int i=0;i<len;i+=3){
		int S=0;
		S+=  1*(s[i+2]-48) + 2*(s[i+1]-48) + 4*(s[i]-48);
		cout<<S;
	}
}

// code by Bao Trung NTP

