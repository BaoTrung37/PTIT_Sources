/*

*/
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9+7;
main(){
	int l[8]={-1,0,1,1,1,0,-1,-1};
	int r[8]={1,1,1,0,-1,-1,-1,0};
	while(1){
		int x,y;
		cin>>x>>y;
		if(x==0 && y==0) break;
		char a[x+5][y+5];
		for(int i=1;i<=x;i++)
			for(int j=1;j<=y;j++)
				cin>>a[i][j];
		for(int i=1;i<=x;i++){
			for(int j=1;j<=y;j++){
				int dem=0;
				if(a[i][j]=='.'){
					for(int k=0;k<8;k++){
						if(a[i+ l[k] ][ j+ r[k]]=='*')
							dem++;
					}
				a[i][j]='0'+dem;
				}
			}
		}
		for(int i=1;i<=x;i++){
			for(int j=1;j<=y;j++){
				cout<<a[i][j];
			}
			cout<<endl;
		}
		cout<<endl;
	}
}

// code by Trung Ares

