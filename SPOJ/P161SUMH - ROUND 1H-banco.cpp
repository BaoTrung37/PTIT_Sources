/*
https://www.spoj.com/PTIT/problems/P161SUMH/
*/
#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int mod = 1e9+7;

main(){
	int n;
	cin>>n;
	char a[n+2][n+2];
	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++)
			cin>>a[i][j];
	int l[4]={1, 0, -1, 0};
	int r[4]={0, -1, 0, 1};
	int kt=1;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			int dem=0;
				for(int k=0;k<4;k++){
					int C=j+l[k];
					int R=i+r[k];
					if (R>=1 && R<=n && C<=n && C>=1 && a[R][C]=='o')
						dem++;
				}
				if(dem%2!=0){
					cout<<"NO";
					kt=0;
					break;
				}		

		}
		if(kt==0) break;
	}
	if(kt==1) cout<<"YES";
}


