#include <stdio.h>
int main(void){
	int i;
	for(;;){
		printf("Enter a number: ");
		scanf("%d",&i);
		if(i==0) return 0;
		printf("ge wei shi %d\n",i%10);
	}

	return 0;
}
