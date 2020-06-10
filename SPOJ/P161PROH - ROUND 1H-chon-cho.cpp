/*

*/
#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int mod = 1e9+7;

main(){
	int n,x,a[3005]={0};
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>x;
		a[x]++;
	}
	for(int i=1;i<=n;i++)
		if(a[i]==0){
			cout<<i<<endl;
			return 0;
		}
	cout<<n+1<<endl;
}


