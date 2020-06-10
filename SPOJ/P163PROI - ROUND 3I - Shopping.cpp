/*

*/
#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int mod = 1e9+7;

main(){
	long long a,b,c;
	cin>>a>>b>>c;
	long long kt1,kt2,kt3,kt4;
	kt1= a+b+c;
	kt2= a+a+b+b;
	kt3= a+a+c+c;
	kt4= c+c+b+b;
	cout<<min(min(min(kt1,kt2),kt3),kt4);
}


