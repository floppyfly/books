#include <stdio.h>
int main(void){
	int n1,n2,n3,max;
	printf("Enter three number: ");
	scanf("%d,%d,%d",&n1,&n2,&n3);
	max=n1;
	if(n2>max){
		max=n2;
	}
	if(n3>max){
		max=n3;
	}
	printf("%d\n",max);

	return 0;
}
