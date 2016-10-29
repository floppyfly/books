#include <stdio.h>
int main(void){
	int m=30;
	for(int i=1;i<=m;i++){
		for(int j=1;j<=i;j++){
			printf("* ");
		}
		printf("\n");
	}

	return 0;
}
