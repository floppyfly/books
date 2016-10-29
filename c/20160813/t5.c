#include <stdio.h>
int main(void){
	int n1,n2,max;
	printf("Enter two numbers: ");
	scanf("%d,%d",&n1,&n2);
	max=n1;
	if(n2>max) max=n2;
	printf("%d\n",max);

	return 0;
}
