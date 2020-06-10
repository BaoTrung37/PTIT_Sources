/*

*/
#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int mod = 1e9+7;

main(){
	long long m,n,a;
	cin>>n>>m>>a;
	long long x,y;
	if(m%a==0){
		x=m/a;
	}
	else x=(m/a)+1;
	if (n%a==0)
		y=n/a;
	else y=(n/a)+1;
	cout<<x*y;
}


