/*

*/
#include<bits/stdc++.h>
using namespace std;

main(){
	int n,a[20];
	int stop=0;
	cin>>n;
	for(int i=0;i<n;i++)
		a[i]=0;
	while( !stop ){
		for(int i=0;i<n;i++)
			cout<<a[i];
		cout<<endl;
		int i=n-1;
		while(a[i]==1 && i>=0)
			i--;
		if(i==-1) stop=1;
		else{
			a[i]=1;
			for(int j=i+1;j<n;j++)
				a[j]=0;
		}
	}
}

// code by Trung 15cm

