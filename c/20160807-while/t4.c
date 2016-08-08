#include <stdio.h>
int main(void){
	int n;
	printf("Enter a number: ");
	scanf("%d",&n);
	while (n>=1){
		printf("%d ",n);
		n=n-1;
	}
	printf("\n");
	
	return 0;
}
