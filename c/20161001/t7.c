#include <stdio.h>
int pingfang(int a);
int cha(int a,int b);
int main(void){
	int x,y;
	printf("enter 2 numbers: ");
	scanf("%d,%d",&x,&y);
	printf("ping fang cha shi %d\n",cha(pingfang(x),pingfang(y)));
	return 0;
}
int pingfang(int a){
	return a*a;
}
int cha(int a,int b){
	return a>b?a-b:b-a;
}
