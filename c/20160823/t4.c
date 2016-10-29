#include <stdio.h>
int main(void){

	int a,b,c;
	int sum;
	double ave;

	puts("Enter three numbers:");
	printf("1:");
	scanf("%d",&a);
	printf("2:");
	scanf("%d",&b);
	printf("3:");
	scanf("%d",&c);
	sum=a+b+c;
	ave=(double)sum/3;

	printf("he=%5d\n",sum);
	printf("ping jun zhi=%5.1f\n",ave);

	return 0;
}
