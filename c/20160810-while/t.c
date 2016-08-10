#include <stdio.h>
int main(void){
	int i=1,sum=0;
	while(i<=100){
		sum=sum+i;
		i=i+1;
	}
	printf("%d \n",sum);
	
	return 0;
}
