/*
https://www.spoj.com/PTIT/problems/PTIT138A/
*/
#include<bits/stdc++.h>
using namespace std;

main(){
	int a,b,c;
	while(1){
		cin>>a>>b>>c;
		if(a==0 && b==0 && c==0)
			break;
		if(a*a+b*b==c*c || a*a+c*c==b*b || b*b+ c*c== a*a)
			cout<<"right"<<endl;
		else cout<<"wrong"<<endl;
	}
}

// code by Trung 15cm

