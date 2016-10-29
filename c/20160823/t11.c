#include <stdio.h>
int main(void)
{
	int i,j=0;
	int a[5];

	for(i=0;i<5;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++){
		j=j+a[i];
	}
	printf("he=%d\n",j);

	return 0;
}
