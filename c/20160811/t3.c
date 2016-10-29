#include <stdio.h>
int main(void){
	int i=1,n;
	scanf("%d",&n);
	while(i<=n){
		printf("%d\t%d\n",i,i*i);
		i=i+1;
	}

	return 0;
}
