/*
https://www.spoj.com/PTIT/problems/P134SUMF/
*/
#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int main(){
	int n,m;
	cin>>n>>m;
	bool isprime[n+1];
	int kq[n+5];
	//danh dau mang nguyen to
	for(int i=0;i<=n;i++)		
		isprime[i]=true;
	isprime[0]=false;
	isprime[1]=false;
	int k=1;
	for(int i=2;i<=n;i++){
		if(isprime[i]==true){
			for(int j=i;j<=n;j+=i){
				if(isprime[j]==true){
					isprime[j]=false;
					kq[k]=j;
					k++;
				}
				
			}
		}
	}
	cout<<kq[m];
}

// code by Bao Trung NTP

