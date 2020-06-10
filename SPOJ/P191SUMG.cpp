#include <bits/stdc++.h>
using namespace std;
int tong(long long n){
	int sum=0;
	while(n>0){
		sum +=n%10;
		n/=10;
	}
	return sum;
}
int main (){
	long long n,s;
	cin>>n>>s;
	long long fi;
	for(long long i=s+1;;i++){
		long long x=i;
		if(i-tong(x)>=s){
			fi=i;
			break;
		}
	}
	long long ans=n-fi+1;
	if(ans<=0){
		cout<<'0';
	}
	else{
		cout<<ans;
	}
	return 0;
}
