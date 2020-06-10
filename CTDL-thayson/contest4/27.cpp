#include <bits/stdc++.h>
using namespace std;
int main (){
	int t;
	cin>>t;
	while(t--){
		long long n,l,r;
		cin>>n>>l>>r;
		vector <int> a,b;
		while(n>1){
			a.push_back(n%2);
			n/=2;
		}
		int len=a.size();
		for(int i=0;i<len/2;i++){
			swap(a[i],a[len-1-i]);
		}
		b.push_back(1);
		for(int i=0;i<len;i++){
			int len1=b.size();
			b.push_back(a[i]);
			for(int j=len1-1;j>=0;j--){
				b.push_back(b[j]);
			}
		}
		for(int i=0;i<b.size();i++){
			cout<<b[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
//Code by Ninh Ngoc

