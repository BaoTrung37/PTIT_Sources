//code bai 4
#include<bits/stdc++.h>
using namespace std;
int n,k,a[10005];
long long f[10005][10005];
int res(int x){
	if(x>=0)  return x;
	else return x+k;
}
main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n>>k;
		long long temp=0;
		for(int i=1; i<=n; i++){
			cin>>a[i];
			a[i]=a[i]%k;
			temp=temp+a[i];
		}
		temp=temp%k;
		f[0][0]=0;
		for(int i=1; i<k; i++){
		    f[0][i]=1e9;	
		}
		for(int i=1; i<=n; i++){
			for(int j=0; j<k; j++){
				f[i][j]=min(f[i-1][j],f[i-1][res(j-a[i])]+1);
			}
		}
		cout<<n-f[n][temp]<<endl;
	}
}
