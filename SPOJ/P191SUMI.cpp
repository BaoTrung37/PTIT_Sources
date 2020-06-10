#include<stdio.h>
#include<math.h>

int s[10]={0},m[10]={0},p[10]={0};

void dem(char a[]){
	if(a[1]=='s')	s[a[0]-'0']++;
	if(a[1]=='m')	m[a[0]-'0']++;
	if(a[1]=='p')	p[a[0]-'0']++;
}

int kt(int a[]){
	int k=1;
	for(int i=0;i<10;i++){
		if(a[i]==3)	return 3;
		if(a[i]&&a[i+1]&&a[i+2])	return 3;
		if(a[i]&&a[i+1])	k=2;
		if(a[i]&&a[i+2])	k=2;
		if(a[i]==2)	k=2;
	}
	return k;
}
main(){
	char s1[10],s2[10],s3[10];
	scanf("%s%s%s",s1,s2,s3);
	dem(s1);
	dem(s2);
	dem(s3);
	int x=kt(s),y=kt(m),z=kt(p);
	if(x<y)	x=y;
	if(x<z)	x=z;
	printf("%d",3-x);
}
