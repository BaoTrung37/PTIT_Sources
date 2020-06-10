//
#include<bits/stdc++.h>
typedef long long i64;
using namespace std;
const int mod = 1e9+7;
void slove(){
	string s;
	cin>>s;
	int du=0;
	for(int i=0;i<s.size();i++)
		du=(du*10+s[i]-48)%36;
	if(du==0) cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
}
main(){
	int t;
	cin>>t;
	while(t--){
		slove();
	}
}


