/*

*/
#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int mod = 1e9+7;

main(){
	int n;
	cin>>n;
	string s,x;
	cin>>s>>x;
	int dem=0;
	for(int i=0;i<n;i++){
		int x1=s[i]-48;
		int x2=x[i]-48;
		if(abs(x1-x2)==0) dem+=0;
		else {
			if(abs(x1-x2)<=5) dem+=(abs(x1-x2));
			else dem+=(10-(abs(x1-x2)));
		}
	}
	cout<<dem;
}


