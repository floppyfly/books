#include <stdio.h>
#define N 3
int main(void)
{
	int x[N];
	int i;
	for(i=0;i<N;i++){
		printf("%d:",i);
		scanf("%d",&x[i]);
	}

	for(i=0;i<N;i++){
		printf("%d\n",x[i]);
	}

	return 0;
}
