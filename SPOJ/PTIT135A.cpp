/*
https://www.spoj.com/PTIT/problems/PTIT135A/
*/
#include<bits/stdc++.h>
using namespace std;
int A[100000]={0};
main(){
	int a,b,c;
	cin>>a>>b>>c;
	int x,y,minn=10000,maxx=-1,s=0;
	int t=3;
	while(t--){
		cin>>x>>y;
		minn=min(x,minn);
		maxx=max(y,maxx);
		for(int i=x;i<y;i++)
			A[i]++;
	}
	for(int i=minn;i<maxx;i++){
		if(A[i]==1) s+=a*1;
		if(A[i]==2) s+=b*2;
		if(A[i]==3)	s+=c*3;
	}
	cout<<s;
}

// code by Trung 15cm

