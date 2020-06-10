#include<iostream>

using namespace std;

struct DS{
	char ten[20];
	int d,m,y;
};

int tim1(DS a[],int n){
	int max=0;
	for(int i=1;i<n;i++){
		if(a[i].y>a[max].y)	max=i;
		else if(a[i].y==a[max].y){
			if(a[i].m>a[max].m)	max=i;
			else if(a[i].m==a[max].m){
				if(a[i].d>a[max].d)	max=i;
			}
		}
	}
	return max;
}

int tim2(DS a[],int n){
	int min=0;
	for(int i=1;i<n;i++){
		if(a[i].y<a[min].y)	min=i;
		else if(a[i].y==a[min].y){
			if(a[i].m<a[min].m)	min=i;
			else if(a[i].m==a[min].m){
				if(a[i].d<a[min].d)	min=i;
			}
		}
	}
	return min;
}

main(){
	DS a[200];
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i].ten;
		cin>>a[i].d>>a[i].m>>a[i].y;
	}
	int b=tim1(a,n);
	int c=tim2(a,n);
	cout<<a[b].ten<<endl<<a[c].ten;
}

