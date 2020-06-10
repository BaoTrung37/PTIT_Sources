//
#include <bits/stdc++.h>
#define pb push_back;
typedef long long i64;
typedef long i32;
const int mod = 1e9+7;
const int Max = 1e6+5;
using namespace std;
int a,b,c;
int main ()
{
	cin>>a>>b>>c;
	int min=200;
	if(a<=min) min=a;
	if(b<=min) min=b;
	if(c<=min) min=c;
	 if( c==min) cout<<c*3-3;
	else if (b==min) cout<<b*3;
	else if( a==min && c-a==1 ) cout<<c*3-3;
	else if(a==min && c-a>=2) cout<<a*3+3;
}