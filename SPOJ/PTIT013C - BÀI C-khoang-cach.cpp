/*
https://www.spoj.com/PTIT/problems/PTIT013C/
solution:
|vevto(u)|+|vecto(v)|>=|vecto(u+v)|
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long;
const int mod = 1e9+7;
main(){
	int t;
	cin>>t;
	while(t--){
		long long a,b,c,d;
		cin>>a>>b>>c>>d;
		long long x=0;
		//cung phia 
		if((b>0 && d>0) || (b<0 && d<0)) 
			x=sqrt((a-c)*(a-c)+(b-(-d))*(b-(-d)));
		else x=sqrt((a-c)*(a-c)+(b-d)*(b-d));
		cout<<x<<endl;
	}
}


