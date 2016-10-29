#include <stdio.h>
int main(void)
{
	int i;
	int a[5]={17,23,36};
	int b[5];

	for(i=4;i>=0;i--)
		b[i]=a[i];

	puts("a\tb");
	puts("---------");
	for(i=0;i<5;i++)
		printf("%d\t%d\n",a[i],b[i]);

	return 0;
}
