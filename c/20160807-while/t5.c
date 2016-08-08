#include <stdio.h>
int main(void){
	int i=1,n;
	printf("Enter a number[1-100]: ");
	scanf("%d",&n);
	if(n>100 || n<1){
		printf("chao chu fan wei\n");
		return 0;
	}
	else{
	while(i<=n){
		printf("%d ",i);
		i=i+2;
	}
	printf("\n");
	return 0;
	}
}
