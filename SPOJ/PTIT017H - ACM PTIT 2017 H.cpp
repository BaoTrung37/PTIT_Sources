/*
 https://www.spoj.com/PTIT/problems/PTIT017H/
*/
#include<bits/stdc++.h>
using namespace std;
long long tonguoc(long long n){
		long long sum=0;
		for(int i=1;i<sqrt(n);i++){
			if(n%i==0){
				sum+=i;
				sum+=n/i;
			}
		}
		if((long long)sqrt(n)==sqrt(n)) sum+=sqrt(n);
	return sum;
}
main(){
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		long long s1=tonguoc(n);
		long long s2=tonguoc(s1);
		if(s2==2*n) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
}
 
// code by Bao Trung NTP
