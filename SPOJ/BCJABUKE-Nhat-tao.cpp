/*
https://www.spoj.com/PTIT/problems/BCJABUKE/
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long;
const int mod = 1e9+7;
main(){
	int n,m,j;
	cin>>n>>m>>j;
	int a[j+4];
	for(int i=1;i<=j;i++)
		cin>>a[i];
	int dau=1,cuoi=m,S=0;
	for(int i=1;i<=j;i++){
		int x=a[i];
		if(x>=dau && x<=cuoi) continue;
		else{
			int tinh=min(abs(x-dau),abs(x-cuoi));
			S+=tinh;
			if(x<dau){
				dau-=tinh;
				cuoi-=tinh;
			}
			else if(x>cuoi){
				dau+=tinh;
				cuoi+=tinh;
			}
		}
	}
	cout<<S;
}


