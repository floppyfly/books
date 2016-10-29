#include <stdio.h>
int lifang(int a);
int cha(int a,int b);
int main(void){
	int x,y;
	printf("Enter 2 numbers: ");
	scanf("%d %d",&x,&y);
	printf("li fang cha shi %d\n",cha(lifang(x),lifang(y)));
	
	return 0;
}
int lifang(int a){
	return a*a*a;
}
int cha(int a,int b){
	return a>b?a-b:b-a;
}
