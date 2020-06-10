/*
https://www.spoj.com/PTIT/problems/P131SUMD/
*/
#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int chuyen5(char a[]){
	int n=strlen(a);
	int s=0;
	for(int i=0;i<n;i++){
		int t=a[i]-'0';
		if(t==6)
			s=s*10+5;
		else s=s*10+t;
	}
	return s;
}
int chuyen6(char a[]){
	int n=strlen(a);
	int s=0;
	for(int i=0;i<n;i++){
		int t=a[i]-'0';
		if(t==5)
			s=s*10+6;
		else s=s*10+t;
	}
	return s;
}
main(){
	char a[10],b[10];
	scanf("%s%s",a,b);
	int x1=chuyen5(a)+chuyen5(b);
	int x2=chuyen6(a)+chuyen6(b);
	cout<<x1<<" "<<x2;
}

// code by Bao Trung NTP

