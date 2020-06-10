/*
https://www.spoj.com/PTIT/problems/P131SUMH/
*/
#include<bits/stdc++.h>
using namespace std;

main(){
	int a,b,c;
	cin>>a>>b>>c;
	if(b-a<c-b) cout<<c-b-1;
	else cout<<b-a-1;
}

// code by Trung 15cm

