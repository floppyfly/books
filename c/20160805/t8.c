#include <stdio.h>
int main(void){
	int n;
	printf("qin shu ru yi ge xiao yu 999 de shu zi: ");
	scanf("%d",&n);
	if(n<0 || n>=1000){
		printf("chao chu fan wei\n");
		return 0;
	}
	if(n/100!=0){
		printf("3 wei shu\n");
	}
	else if(n/10!=0){
		printf("2 wei shu\n");
	}
	else{
		printf("1 wei shu\n");
	}
	return 0;
}
