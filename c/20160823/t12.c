#include <stdio.h>
#define N	5

int main(void)
{
	int i,max;
	int a[N];
	for(i=0;i<N;i++){
	scanf("%d",&a[i]);
	}
	max=a[0];
	for(i=0;i<N;i++){
		if(a[i]>max){
			max=a[i];
		}
	}
	printf("%d\n",max);

	return 0;
}
