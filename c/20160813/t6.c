#include <stdio.h>
int main(void){
	int n1,n2,n3,max;
	printf("Enter three numbers: ");
	scanf("%d %d %d",&n1,&n2,&n3);
	max=n1>n2?n1:n2;
	max=max>n3?max:n3;
	printf("%d\n",max);

	return 0;
}
