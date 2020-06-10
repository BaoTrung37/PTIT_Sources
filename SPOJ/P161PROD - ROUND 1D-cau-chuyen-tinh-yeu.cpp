/*
https://www.spoj.com/PTIT/problems/P161PROD/
*/
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9+7;
main(){
	char s1[10]={'q','w','e','r','t','y','u','i','o','p'};
	char s2[10]={'a','s','d','f','g','h','j','k','l',';'};
	char s3[10]={'z','x','c','v','b','n','m',',','.','/'};
	char x;
	cin>>x;
	string s;
	string tmp="";
	cin>>s;
	int n=s.size();
	if(x=='L'){
		for(int i=0;i<n;i++){
			for(int j=1;j<10;j++){
				if(s1[j]==s[i]){
					tmp=tmp+s1[j-1];
					break;
				}
				else if(s2[j]==s[i]){
					tmp=tmp+s2[j-1];
					break;
				}
				else{
					tmp=tmp+s3[j-1];
					break;
				}
			}
		}
	}
	else{
		for(int i=0;i<n;i++){
			for(int j=0;j<10-1;j++){
				if(s1[j]==s[i]){
					tmp=tmp+s1[j+1];
					s[i]='\0';
					break;
				}
				else if(s2[j]==s[i]){
					tmp=tmp+s2[j+1];
					s[i]='\0';
					break;
				}
				else{
					tmp=tmp+s3[j+1];
					s[i]='\0';
					break;	
				}
			}
		}
	}
	tmp[tmp.size()]='\0';
	cout<<tmp;
}

// code by Trung Ares

