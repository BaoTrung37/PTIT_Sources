/*
https://www.spoj.com/PTIT/problems/P153SUMF/
*/
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9+7;
main(){
	int n;
	cin>>n;
	string S;
	cin>>S;
	int ds[125];
	//khoi tao danh sach bang 0
	for(int i=0;i<=123;i++){
		ds[i]=0;
	}
	//chuyen ve ki tu thuong
	for(int i=0;i<n;i++){
		int stt=S[i];
		if(stt>=97 && stt<=122) stt-=32;
		ds[stt]++;
	}
	int kt=1;
	//kt neu phan tu a->z co xuat hien it nhat 1 lan
	for(int i=65;i<=90;i++){
		if(ds[i]==0){
			kt=0;
			break;
		}
	}
	if(kt==0) cout<<"NO";
	else cout<<"YES";
}

// code by Trung Ares

