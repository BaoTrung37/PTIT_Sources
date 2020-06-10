/*
https://www.spoj.com/PTIT/problems/BCACM11B/
*/
#include<bits/stdc++.h>
using namespace std;

main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int a[100][100],n,b,i,x,y,dem=1;
		scanf("%d%d%d",&n,&x,&y);
		while(b<=n/2){
			for(i=b;i<n-b;i++)		a[b][i]=dem++;
			for(i=b+1;i<n-b;i++)	a[i][n-b-1]=dem++;
			for(i=n-b-2;i>=b;i--)	a[n-b-1][i]=dem++;
			for(i=n-b-2;i>b;i--)	a[i][b]=dem++;
			b++;
		}
		printf("%d\n",a[x-1][y-1]);
	}
}

// code by Bao Trung NTP

