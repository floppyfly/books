#include <stdio.h>
int main(void){
	char n;
	int i,j;
	scanf("%c",&n);
	for(i=1;i<=3;i++){
		for(j=1;j<=4;j++){
			printf("%c ",n);
		}
		printf("\n");
	}

	return 0;
}
