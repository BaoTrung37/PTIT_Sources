/*
https://www.spoj.com/PTIT/problems/ALGOPRO9/
*/
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9+7;
long long l,r;
int Prime[1000006]={0};
void sang(){
	Prime[1] = 1;
	Prime[0] = 1;
	for(int i = 2 ; i <= 1000 ; i++)
		if(Prime[i] == 0)
			for(int j = i * i ; j <= 1000000 ; j += i)
				if(Prime[j] == 0)
					Prime[j] = 1;

}
void solu(){
	cin >> l >> r;
	//int x = sqrt(l), y = sqrt(r);
	long long dem = 0;
	for(int i = l ; i <= r; i++)
		if(Prime[i] == 0)
			dem ++;
	cout << dem << endl;
}
main(){
	int t;
	cin>>t;
	sang();
	while(t--){
		solu();
	}
}

// code by Trung Ares

