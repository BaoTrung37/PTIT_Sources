/*
https://www.spoj.com/PTIT/problems/PTIT014A/
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long;
const int mod = 1e9+7;
main(){
	int t;
	scanf("%d\n",&t);
	while(t--){
		string s;
		getline(cin,s);
		if(s=="dung") cout<<"2"<<endl;
		else if(s=="lon hon") cout<<"1"<<endl;
		else cout<<"3"<<endl;
	}
}


