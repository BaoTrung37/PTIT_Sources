/*
https://www.spoj.com/PTIT/problems/ALGOPRO5/
*/
#include<bits/stdc++.h>
#include<math.h>
using namespace std;

main(){
	long long n;
	cin>>n;
	long long tong=0;
	for(int i=1;i<=n;i++)
		tong+= pow(2,i);
	cout << tong;
}

// code by Bao Trung NTP

