/*
https://www.spoj.com/PTIT/problems/BCNEPER/
*/
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9+7;
main(){
	int t;
	cin>>t;
	while(t--){
		int stt;
		cin>>stt;
		string s;
		cin>>s;
		long long n=s.size();
		bool kt=false;
		long long i=n-2;
		while(i>=0 && s[i]>=s[i+1]){
			i--;
		}
		if(i>=0){
			long long k=n-1;
			while(s[i]>=s[k]){
				k--;
			}
			swap(s[i],s[k]);
			long long l=i+1;
			long long r=n-1;
			while(l<=r){
				swap(s[l],s[r]);
				l++;
				r--;
			}
		}
		else{
			kt=true;
		}
		if(kt==true){
			cout<<stt<<" BIGGEST"<<endl;
		}
		else{
			cout<<stt<<" "<<s<<endl;
		}
	}	
}

// code by Trung Ares

