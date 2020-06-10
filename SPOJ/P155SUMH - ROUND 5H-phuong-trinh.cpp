/*

*/
#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int mod = 1e9+7;
int tong(int n){
	int s=0;
	while(n>0){
		s+=n%10;
		n/=10;
	}
	return s;
}
main(){
	int a,b,c;
	cin>>a>>b>>c;
	int sl=0,A[10000]={0};
	for(int i=0;i<=81;i++){
		int x=b*pow(i,a)+c;
		if(x>0 && x<1e9 && tong(x)==i) A[sl++]=x;
	}
	cout<<sl<<endl;
	for(int i=0;i<sl;i++)
		cout<<A[i]<<" ";
}


