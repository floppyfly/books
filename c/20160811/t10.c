#include <stdio.h>
int main(void){
	int m=4,n=4;
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			printf("* ");
		}
		printf("\n");
		n--;
		for(int k=n;k<m;k++){
			printf(" ");
		}
	}
	printf("\n");

	return 0;
}
