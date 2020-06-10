/*

*/
#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int mod = 1e9+7;
long long n,m,a,res;
void nhap(){
	cin>>a;
}

long long tinh(long long a,long long b){
	long long sum=0;
	long long ssh=(b-a)/2+1;
	sum=(b+a)*ssh/2;
	return sum;
}
void solution(){
	if(a%2==1){
		n=a;
		m=a-1;
	}
	else{
		m=a;
		n=a-1;
	}
	long long s1=tinh(1,n);
	long long s2=tinh(2,m);
	cout<<s2-s1;
}
main(){
	nhap();
	solution();
}


