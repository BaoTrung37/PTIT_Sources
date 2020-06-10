/*
https://www.spoj.com/PTIT/problems/PTIT018C/
*/
#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int mod = 1e9+7;
long long pow(int n,int k,int m){
	if(k==0) return 1;
	long long st=pow(n,k/2,m);
	if(k%2==0) return (st*st)%m;
	return (st*st%m)*n%m;
}
void slove(){
	string s;
	int b,m;
	cin>>s>>b>>m;
	int du=0;
	for(int i=0;i<s.size();i++){
		du=(du*10+s[i]-48)%m;
	}
	cout<<pow(du,b,m)<<endl;
}
main(){
	int t;
	cin>>t;
	while(t--){
		slove();
	}
}


