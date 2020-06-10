/*
https://www.spoj.com/PTIT/problems/P134SUMB/
*/
#include<bits/stdc++.h>
#include<math.h>
using namespace std;

main(){
	long long g,y;
	cin>>g>>y;
	double denta=(g/2+2)*(g/2+2)-4*(g+y);
	long long x1=((g/2+2)-sqrt(denta))/2;
	long long x2=(g+y)/x1;
	cout<<x1<<" "<<x2;
}

// code by Bao Trung NTP

