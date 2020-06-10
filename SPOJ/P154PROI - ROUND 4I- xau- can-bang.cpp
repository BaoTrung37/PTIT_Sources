/*

*/
#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int mod = 1e9+7;
string s;
int t;
int Cb(string s){
	string r= "";
	int l = s.size();
	for(int i=l-1;i>=0;i--)	r+=s[i];
	for(int i=0;i<l-1;i++){
		if(fabs(s[i]-s[i+1]) != fabs(r[i]-r[i+1]))
			return 0;
	}
	return 1;
}

main(){
	cin>>t;
	while(t--){
		cin>>s;
		if(Cb(s)==1) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
}


