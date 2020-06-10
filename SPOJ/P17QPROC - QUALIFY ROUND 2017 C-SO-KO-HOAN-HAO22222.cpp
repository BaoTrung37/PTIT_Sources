/*

*/
#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int mod = 1e9+7;

ll pri[10000005];

main(){
	ll a,b;
	cin>>a>>b;
	pri[1]=1;
	for(int i=1;i<=b;i++)	pri[i]=1;
	for(int i=2;i<=b;i++){
		if(pri[i]==1){
			ll tmp=i;
			ll cnt=1;
			while(tmp<=b){
				cnt+=tmp;
				pri[tmp]=cnt;
				for(int j=2;j<=b/tmp;j++){
					if(j%i==0) continue;
					pri[j*tmp]*=cnt;
				}
				tmp*=i;
			}
		}
	}
	ll ans=0;
	for(int i=a;i<=b;i++)
		ans+=abs(pri[i]-2*i);
	cout<<ans;
}


