/*
https://www.spoj.com/PTIT/problems/P182PROH/
https://vi.wikipedia.org/wiki/24_gi%E1%BB%9D
*/
#include<bits/stdc++.h>
#include<cstring>
using namespace std;

main(){
	string s;
	cin>>s;
	int hh=(s[0]-'0')*10+(s[1]-'0');
	int mm=(s[3]-'0')*10+(s[4]-'0');
	int ss=(s[6]-'0')*10+(s[7]-'0');
	if(hh<12 && s[8]=='P') hh+=12;
	if(hh==12 && s[8]=='P') hh=12;
	if(hh==12 && s[8]=='A') hh=0;
	printf("%.2d:%.2d:%.2d",hh,mm,ss);
}

// code by Bao Trung NTP

