/*

*/
#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int mod = 1e9+7;

main(){
	string s;
	cin>>s;
	int kt=0,n=s.size();
	for(int i=n-1;i>=0;i--){
		if((n-i)%3==0){
			cout<<","<<s[i];
		}
		else cout<<s[i];
	}
}


