/*

*/
#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int mod = 1e9+7;

main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int kt=1;
		for(int i=0;i<s.size();i++){
			if((i+1)%2==1){
				int x=s[i]-48;
				if(x%2!=1){
					kt=0;
					break;
				}
			}
			if((i+1)%2==0){
				int x=s[i]-48;
				if(x%2!=0){
					kt=0;
					break;
				}
			}
		}
		if(kt==1) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
}


