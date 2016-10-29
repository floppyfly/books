#include <stdio.h>
#define N 10
int main(void)
{
	int a[N];
	int i;
	for(i=0;i<N;i++){
		*(a+i)=i+1;
	}
	for(i=0;i<N;i++){
		printf("%d ",*(a+i));
	}

	return 0;
}
