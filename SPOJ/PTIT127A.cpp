/*
https://www.spoj.com/PTIT/problems/PTIT127A/
*/
#include<bits/stdc++.h>
using namespace std;

main(){
	int a,b,c;
	cin>>a>>b>>c;
	int maxdoi=min(a/2,b);
	if(a-maxdoi*2+b-maxdoi>=c) cout<<maxdoi;
	else{
		while(maxdoi>0 && a-maxdoi*2+b-maxdoi<c){
			maxdoi-=1;
		}
		cout<<maxdoi;
	}
}

// code by Trung 15cm

