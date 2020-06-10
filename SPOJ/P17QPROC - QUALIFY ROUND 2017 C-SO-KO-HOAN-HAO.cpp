/*

*/
#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int mod = 1e9+7;
long long  A[10000007]={0};
main(){
	long a,b;
	cin>>a>>b;
	if(a>b) swap(a,b);
	for(long i=1 ; i<=b ; i++){
		for(long j=i ; j<=b ; j+=i){
			A[j]+=i;
		}
	}
	long long tong=0;
	for(long i =a ; i<=b ; i++){
		tong+= (abs(2*i-A[i]));
	}
		cout<<tong;
}


