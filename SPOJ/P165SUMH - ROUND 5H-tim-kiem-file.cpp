/*

*/
#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int mod = 1e9+7;
int n;
string s,p;
bool check(string a,string b){
	int la=a.size();
	int lb=b.size();
	if(lb<la-1) return false;
	
	int pos1=0;
	for(int i=0;i<la;i++){
		if(a[i] != b[i]){
			pos1 = i;
			break;
		} 
	}
	if(a[pos1]!='*') return false;
	
	int pos2=0;
	for(int i=1;i<la;i++){
		if(a[la-i] !=b [lb-i]){
		pos2 = la-i;
			break;
		} 
	}
	if(a[pos2]!='*') return false;
	return true;
}

main(){
	cin>>n;
	cin>>s;
	for(int i=0;i<n;i++){
		cin>>p;
		if(check(s,p)) cout<<"DA"<<endl;
		else cout<<"NE"<<endl;
	}
}


