/*

*/
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9+7;

main(){
	int n=246912;
	bool ngto[n+1];
	int so[n+2];
	for(int i=2;i<=n;i++){
		ngto[i]=true;
		so[i]=0;
	}
	for(int i=2;i<=sqrt(n);i++){
		if(ngto[i]==true){
			for(int j=i*i; j<=n; j+=i){
				ngto[j]=false;
			}
		}
	}
	int dem=0;
	for(int i=2;i<=n;i++){
		if(ngto[i]==true){
			dem++;
			so[i]=dem;	
		}
	}
	while(1){
		int x;
		cin>>x;
		if(x==0) break;
		int a=x+1,b=2*x;
		while(1){
			if(ngto[a]==true) break;
			a++;
		}
		while(1){
			if(ngto[b]==true) break;
			b--;
		}
		cout<<so[b]-so[a]+1<<endl;
	}
}

// code by Trung Ares

