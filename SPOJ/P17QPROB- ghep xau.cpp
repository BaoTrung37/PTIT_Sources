/*
https://www.spoj.com/PTIT/problems/P17QPROB/
*/
#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int mod = 1e9+7;
struct dta{
	string s;
};
int cmp(dta a, dta b){
	if((a.s+b.s)<(b.s+a.s)) return 1;
	return 0;
}
main(){
	int t,sl;
	cin>>t;
	struct dta ma[15];
	while(t--){
		cin>>sl;
		for(int i=1;i<=sl;i++)
			cin>>ma[i].s;
		sort(ma+1,ma+sl+1,cmp);
		string res="";
		for(int i=1;i<=sl;i++){
			res+=ma[i].s;
		}
		cout<<res<<endl;
	}	
}


