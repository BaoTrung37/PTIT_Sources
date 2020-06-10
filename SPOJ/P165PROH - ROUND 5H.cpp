/*
https://www.spoj.com/PTIT/problems/P165PROH/
*/
#include<bits/stdc++.h>
#include<math.h>
using namespace std;

#include<bits/stdc++.h>
#include<cmath>
using namespace std;
 
main(){
	int t;
	cin>>t;
	while(t--){
		long long a,b,c;
	cin>>a>>b>>c;
	long long n=a*b*c;
	long long x=sqrt(n)/a;
	long long y=sqrt(n)/b;
	long long z=sqrt(n)/c;
	cout<< 4*(x+y+z)<<endl;
	}
	
}
 
// code by Bao Trung NTP

// code by Trung 15cm

