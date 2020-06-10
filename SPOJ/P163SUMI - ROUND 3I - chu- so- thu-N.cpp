//https://www.spoj.com/PTIT/problems/P163SUMI/
#include<bits/stdc++.h>
typedef long long i64;
typedef long i32;
const int mod = 1e9+7;
using namespace std;
string s;
int n;

string chuoi(int n){
	string ans="";
	while(n>0){
		ans = char(n%10 +48) + ans;
		n/=10;
	}
	return ans;
}
void process(){
	s="";
	int k=0;
	while(s.size()<n){
		k++;
		s+= chuoi(k);
	}
	n--;
}
main(){
	cin>>n;
	process();
	cout<<s[n];
}


