/*
https://www.spoj.com/PTIT/problems/BCTEST11/
*/
#include<bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
const long long mod = 1e9+7;

main(){
	IOS;
	int n,a[14]={4,7,44,47,74,77,444,447,474,477,744,747,774,777};
	int kt=1;
	cin>>n;
	for(int i=0;i<14;i++){
		if(n%a[i]==0){
			kt=0;
			cout<<"YES";
			break;
		}
	}
	if(kt==1) cout<<"NO";
}

// code by Trung 15cm

