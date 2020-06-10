/*
https://www.spoj.com/PTIT/problems/P162PROH/
*/
#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int mod = 1e9+7;

main(){
int n;
	cin>>n;
	int i=1,D=0,dem=0;
	while(1){
		D=D+i;
		n-=D;
		if(n<0){
			cout<<dem;
			break;
		}
		else{
			i++;
			dem++;
		}
	}
}


