/*

*/
#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int mod = 1e9+7;
void themKhong(char *s,int &n){
	n++;
	for(int i=n-1;i>=0;i--)
		s[i+1]=s[i];
	s[0]='0';
}
main(){
	char s[10000];
	cin>>s;
	int n=strlen(s);
	while((n%3)!=0){
		themKhong(s,n);
	}
	for(int i=0;i<n;i+=3){
		int t= 4*(s[i]-'0') + 2*(s[i+1]-'0') + 1*(s[i+2]-'0');
		cout<<t;
	}
}


