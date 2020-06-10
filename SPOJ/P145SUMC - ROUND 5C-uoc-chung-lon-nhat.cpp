//https://www.spoj.com/PTIT/problems/P145SUMC/
#include<bits/stdc++.h>
typedef long long i64;
typedef long i32;
const int mod = 1e9+7;
using namespace std;
i32 m,a,b,l,r,u,res,bb[100004],top;

i32 ucln(i32 x,i32 y){
	while(y!=0){
		i32 tmp=x%y;
		x=y;
		y=tmp;
	}
	return x;
}
void uc(i32 n){
	top=0;
	for(i32 i=1;i<=sqrt(n);i++){
		if(n%i==0){
			top++;
			bb[top]=i;
			if(i*i!=n){
				top++;
				bb[top]=n/i;
			}
		}
	}
	sort(bb+1,bb+1+top);
}
i32 find(i32 l,i32 r){
	i32 d=1,c=top,kq=-1;
	while(d<=c){
		i32 mid=(d+c)/2;
		if(l<=bb[mid] && bb[mid]<= r){
			kq=bb[mid];
			d=mid+1;
		}
		else if(bb[mid]>r) c=mid-1;
		else if(bb[mid]<l) d=mid+1; 
	}
	return kq;
}
void slove(){
	cin>>a>>b>>m;
	u=ucln(a,b);
	uc(u);
	for(int i=0;i<m;i++){
		cin>>l>>r;
		res=find(l,r);
		cout<<res<<endl;
	}
}
main(){
	slove();
}


