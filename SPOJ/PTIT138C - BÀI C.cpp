/*
https://www.spoj.com/PTIT/problems/PTIT138C/
*/
#include<bits/stdc++.h>
#include<string.h>
#include<ctype.h>
using namespace std;


main(){
	int t;
	cin>>t;
	while(t--){
		char s[10000];
		cin>>s;
		int n=strlen(s);
		char kq1[10000]="",kq2[10000]="";
		for(int i=0;i<n;i++){
			s[i]=toupper(s[i]);
			if(s[i]=='A'||s[i]=='B'||s[i]=='C'){
				strcat(kq1,"2");
			}	
			else if(s[i]=='D'||s[i]=='E'||s[i]=='F'){
				strcat(kq1,"3");
			}
			else if(s[i]=='G'||s[i]=='H'||s[i]=='I'){
				strcat(kq1,"4");
			}
			else if(s[i]=='J'||s[i]=='K'||s[i]=='L'){
				strcat(kq1,"5");
			}
			else if(s[i]=='M'||s[i]=='N'||s[i]=='O'){
				strcat(kq1,"6");
			}
			else if(s[i]=='P'||s[i]=='Q'||s[i]=='R'||s[i]=='S'){
				strcat(kq1,"7");
			}
			else if(s[i]=='T'||s[i]=='U'||s[i]=='V'){
				strcat(kq1,"8");
			}
			else if(s[i]=='W'||s[i]=='X'||s[i]=='Y'||s[i]=='Z'){
				strcat(kq1,"9");
			}
		}
		kq1[strlen(kq1)]='\0';
		int x=0;
		for(int i=n-1;i>=0;i--){
			kq2[x++]=kq1[i];
		}
		kq2[strlen(kq2)]='\0';
		if(strcmp(kq1,kq2)==0) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
		//cout<<kq1<<" "<<kq2;
	}
}

// code by Trung 15cm

