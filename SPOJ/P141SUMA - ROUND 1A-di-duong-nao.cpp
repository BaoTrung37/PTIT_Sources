/*
https://www.spoj.com/PTIT/problems/P141SUMA/
*/
#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int mod = 1e9+7;

main(){
	long long  ax,ay;
	cin>> ax >> ay;
	long long bx,by;
	cin>> bx >> by;
	long long cx,cy;
	cin>> cx >> cy;
	long long CWM = (bx - ax)*(cy-ay) - (by-ay)*(cx-ax);
	if(CWM == 0 ) cout << "TOWARDS" ;
	else if(CWM < 0) cout <<"RIGHT";
	else cout << "LEFT";
}


