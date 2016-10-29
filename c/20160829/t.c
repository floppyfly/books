#include <stdio.h>
int main(void)
{
	int a[5]={17,23,36};
	int b[5];
	int i;
	for(i=0;i<5;i++){
		b[i]=a[i];
	}
	for(i=0;i<5;i++){
		printf("%p,%d\n",&b[i],b[i]);
	}
	printf("\a\a\a");

	return 0;
}
