#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
 
int main(){
	int test;
	cin>>test;
	while(test--){
		string n;
		cin>>n;
		int x;
		if(n.length()-2 >= 0) 
			x=(n[n.length()-2] - 48)*10+
			  (n[n.length()-1] - 48);
		else x = (n[n.length()-1] - 48);
 
		if(x%4==0) cout<<4<<endl;
		else {
			cout<<0<<endl;
		}
	}
}
