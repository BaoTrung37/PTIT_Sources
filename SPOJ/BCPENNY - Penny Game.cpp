/*
https://www.spoj.com/PTIT/problems/BCPENNY/
*/
#include<bits/stdc++.h>
using namespace std;

main(){
	int t;
	cin>>t;
	while(t--){
		int stt;
		cin>>stt;
		string s;
		cin>>s;
		int n=s.length();
		int dem1=0,dem2=0,dem3=0,dem4=0,dem5=0,dem6=0,dem7=0,dem8=0;
		for(int i=1;i<n-1;i++){
			if(s[i-1]=='T' && s[i]=='T' && s[i+1]=='T') dem1++;
			else if(s[i-1]=='T' && s[i]=='T' && s[i+1]=='H') dem2++;
			else if(s[i-1]=='T' && s[i]=='H' && s[i+1]=='T') dem3++;
			else if(s[i-1]=='T' && s[i]=='H' && s[i+1]=='H') dem4++;
			else if(s[i-1]=='H' && s[i]=='T' && s[i+1]=='T') dem5++;
			else if(s[i-1]=='H' && s[i]=='T' && s[i+1]=='H') dem6++;
			else if(s[i-1]=='H' && s[i]=='H' && s[i+1]=='T') dem7++;
			else if(s[i-1]=='H' && s[i]=='H' && s[i+1]=='H') dem8++;
		}
		cout <<stt<<" "<<dem1<<" "<<dem2<<" "<<dem3<<" "<<dem4<<" "<<dem5<<" "<<dem6<<" "<<dem7<<" "<<dem8;
		cout<<endl;
	}
}

// code by Trung 15cm

