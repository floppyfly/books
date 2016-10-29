#include <stdio.h>
int main(void){
	int arr[5];
	int i;
	for(i=0;i<5;i++){
		scanf("%d",&arr[i]);
	}
	for(i=0;i<5;i++){
		printf("%d,",arr[i]);
	}
	puts("");
	int temp;
	scanf("%d",&temp);
	printf("%d\n",temp);

	return 0;
}
