#include <stdio.h>
int main(void)
{
	int a=16;
	int i=10;
	int *p=&i;
	
	printf("p=%p,*p=%d,i=%d,&i=%p\n",p,*p,i,&i);

	*p=20;
	printf("*p=%d,i=%d\n",*p,i);
	p=&a;
	*p=30;
	printf("p=%p,*p=%d,i=%d,&i=%p,a=%d,&a=%p\n",p,*p,i,&i,a,&a);

	return 0;
}
