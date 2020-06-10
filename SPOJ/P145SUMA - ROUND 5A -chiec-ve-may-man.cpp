/*

*/
#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int mod = 1e9+7;

main(){
	int n;
	cin>>n;
	string s;
	cin>>s;
	int sumL=0,sumR=0;
	int kt=1;
	for(int i=0;i<(n/2);i++){
		if(s[i]=='4' || s[i]=='7'){
			sumL+=(s[i]-48);
		}
		else{
			kt=0;
			break;
		}
		if(s[n-i-1]=='4' || s[n-i-1]=='7'){
			sumR+=(s[n-i-1]-48);
		}
		else{
			kt=0;
			break;
		}
	}
	if(kt==1 && sumL==sumR) cout<<"YES";
	else cout<<"NO";
}


