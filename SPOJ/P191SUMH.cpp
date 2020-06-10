/*
https://www.spoj.com/ACMPTIT/problems/P191SUMH/
*/
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9+7;
main(){
	int n;
	cin>>n;
	int dem=0;
	char a[n+5][n+5];
	for(int i=1;i<=n;i++)
  		for(int j=1;j<=n;j++){
			cin>>a[i][j];
			if(a[i][j]=='.') dem++;
		}
	for(int i=2;i<n;i++){
		for(int j=2;j<n;j++){
			int kt=1;
			if(a[i][j]=='.'){
				if(a[i-1][j] !='.' || a[i+1][j] !='.' || a[i][j-1] !='.' || a[i][j+1] !='.'){
					kt=0;
					break;
				}
				if(kt){
					a[i][j]	 =='#';
					a[i-1][j]=='#';
					a[i+1][j]=='#';
					a[i][j-1]=='#';
					a[i][j+1]=='#';
					dem-=5;
				}	
			}
		}
	}
	//if(dem==0)
	  cout<<dem;
//	else cout <<"NO";
}

// code by Trung Ares
				
